#include "BitcoinExchange.hpp"
#include "BitcoinExchange.hpp"
int main(int argc, char** argv) {
    if (argc != 2) {
        std::cerr << "Error: bad arguments" << std::endl;
        return 1;
    }

    BitcoinExchange exchange;
    exchange.LoadDatabase("data.csv");
    exchange.loadFile(argv[1]);
    exchange.exchange();

    return 0;
}