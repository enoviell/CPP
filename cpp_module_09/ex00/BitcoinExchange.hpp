// BitcoinExchange.hpp

#ifndef BITCOINEXCHANGE_HPP_
#define BITCOINEXCHANGE_HPP_
#include <map>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <ctime>

struct BitcoinData {
    std::string date;
    double rate;
};
class BitcoinExchange {
public:
BitcoinExchange();
BitcoinExchange(BitcoinExchange &copy);
BitcoinExchange &operator=(BitcoinExchange &copy);
~BitcoinExchange();
void LoadDatabase(const std::string& filename);
void loadFile(const std::string& filename);
void exchange() ;

private:
std::map<std::string, double> bitcoinData;
std::multimap<std::string, double> toConvertData;
bool isValidDate(const std::string& date);
double getExchangeRate(const std::string& date);
void printExchangeResult(const std::string& date, double quantity, double rate, double result);
};
#endif
