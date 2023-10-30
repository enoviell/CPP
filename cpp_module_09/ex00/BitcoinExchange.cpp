#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(BitcoinExchange &copy) {
    bitcoinData = copy.bitcoinData;
}

BitcoinExchange& BitcoinExchange::operator=(BitcoinExchange& other) {
    if (this == &other) {
        // Autoassegnamento, non è necessario fare nulla
        return *this;
    }
    // Copia i dati relativi ai Bitcoin
    this->bitcoinData = other.bitcoinData;
    // Copia i dati di conversione
    this->toConvertData = other.toConvertData;

    return *this;
}




BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::LoadDatabase(const std::string &filename)
{
    std::ifstream file(filename);
    if(!file){
        std::cout << "File not found" << std::endl;
        exit(1);
    }
    std::string line;
    std::getline(file,line);//salta header
    while(std::getline(file,line))
    {
        std::stringstream ss(line);
        BitcoinData data;
        if (std::getline(ss, data.date, ',') && (ss >> data.rate))
        {

            bitcoinData[data.date]=data.rate;
        }
        else
            std::cout << "Error in file format" << std::endl;
    }
}

void BitcoinExchange::loadFile(const std::string &filename) {
    std::ifstream file(filename);
    if (!file) {
        std::cerr << "Error: could not open file " << filename << std::endl;
        exit(1);
    }

    std::string line;
    getline(file, line); // Salta l'intestazione

    while (std::getline(file, line)) {
        std::istringstream iss(line);
        BitcoinData data;

        // Utilizza "|" come delimitatore e considera spazi prima e dopo
        if (std::getline(iss >> std::ws, data.date, '|') && (iss >> data.rate)) {
            // Verifica se il tasso di cambio è un numero valido
            if (data.rate < 0 || data.rate > 1000 ) {
                std::cerr << "Error: Invalid value: " << data.rate << ". Valid values must be a positive integer or a float between 0 and 1000." << std::endl;
                continue;
            }

            // Verifica se la data è valida
            if (!isValidDate(data.date)) {
                std::cerr << "Error: invalid date in file " << filename << ": " << data.date << std::endl;
                continue;
            }

            // Aggiungi i dati convertiti solo se la riga è corretta
            // Insert into toConvertData using insert function for multimap
            toConvertData.insert(std::make_pair(data.date, data.rate));
        } else {
            std::cerr << "Error: invalid line in file " << filename << std::endl;
        }
    }
}



bool BitcoinExchange::isValidDate(const std::string& date) {
    if (date.size() != 11) {
        return false; // La lunghezza deve essere esattamente di 10 caratteri "YYYY-MM-DD".
    }


    if (date[4] != '-' || date[7] != '-') {
        return false; // Il separatore deve essere il carattere '-' nelle posizioni 4 e 7.
    }
    for (int i = 0; i < 10; i++) {
        if (i == 4 || i == 7) {
            continue; // Salta i separatori.
        }
        if (!isdigit(date[i])) {
            return false; // Ogni carattere deve essere una cifra.
        }
    }

    // Estrai i componenti della data (anno, mese, giorno)
    int year = std::stoi(date.substr(0, 4));
    int month = std::stoi(date.substr(5, 2));
    int day = std::stoi(date.substr(8, 2));

    // Verifica che l'anno, il mese e il giorno siano validi
    if (year < 0 || year > 9999 || month < 1 || month > 12 || day < 1 || day > 31) {
        return false; // Anno, mese o giorno non validi.
    }


    return true;
}
int	getIntDate(std::string date)
{
	std::stringstream	str;
	int	d, m, y, flag = 1;

	str.str(date);
	y = atoi(date.substr(0, 4).c_str());
	m = atoi(date.substr(5, 6).c_str());
	if (m > 12)
		flag = 0;
	d = atoi(date.substr(8, 9).c_str());
	if (d > 31)
		flag = 0;
	if (flag)
		return ((y * 10000) + (m * 100) + d);
	return (((y * 10000) + (m * 100) + d) * -1);
} 

double BitcoinExchange::getExchangeRate(const std::string& date) {
    double numericDate = static_cast<double>(getIntDate(date));
    double closestRate = 0.0;

    for (const auto& bitcoin : bitcoinData) {
        double bitcoinNumericDate = static_cast<double>(getIntDate(bitcoin.first));

        // Verifica se la data corrente è più vicina alla data richiesta
       if (bitcoinNumericDate <= numericDate && bitcoinNumericDate > closestRate) {
            closestRate = bitcoin.second;
        }
    }

    return closestRate;
}


void BitcoinExchange::printExchangeResult(const std::string& date, double quantity, double rate, double result) {
    std::cout << date << " => qty: " << quantity
              << " | rate: " << rate
              << " = " <<  result << std::endl;
}

void BitcoinExchange::exchange() {
    for (const auto& data : toConvertData) {
        double exchangeRate = getExchangeRate(data.first);
        if (exchangeRate >= 0) {
            double result = data.second * exchangeRate;
           printExchangeResult(data.first, data.second, exchangeRate, result);
        }
    }
}





