#include "iter.hpp"

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char charArray[] = "Hello, World!";


    std::cout << "Iterating over intArray: ";
    iter(intArray, 5, print<int>); 
    std::cout << std::endl;

    std::cout << "Iterating over doubleArray: ";
    iter(doubleArray, 5, print<double>); 
    std::cout << std::endl;

    std::cout << "Iterating over charArray: ";
    iter(charArray, 13, print<char>); 
    std::cout << std::endl;

return 0;
}