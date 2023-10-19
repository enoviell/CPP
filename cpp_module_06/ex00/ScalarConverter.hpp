#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <limits>
#include <iomanip>

class ScalarConverter
{
	private:
   ScalarConverter(const ScalarConverter& other);
    ScalarConverter& operator=(const ScalarConverter& other);
    static void convertChar(char c);
    static bool isSpecialType(const std::string& str);
    static void convertSpecialType(const std::string& str);
    static bool isValidNumber(const std::string& str);
    static void convertNumber(const std::string& str);
    public:
		ScalarConverter();
		~ScalarConverter();
		void convert(const std::string& str);
};
#endif