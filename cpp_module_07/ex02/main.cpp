#include "Array.hpp"
#include <iostream>

int main() {
    // Test di costruzione di un array vuoto
    Array<int> emptyArray;
    std::cout << "Empty Array size: " << emptyArray.size() << std::endl;

    // Test di costruzione di un array di 5 elementi inizializzati per default
    Array<double> defaultArray(5);
    std::cout << "Default Array size: " << defaultArray.size() << std::endl;

    // Test dell'operatore di assegnazione
    Array<int> intArray1;
    intArray1 = emptyArray;  // Copia di un array vuoto
    std::cout << "IntArray1 size after assignment: " << intArray1.size() << std::endl;

    // Test della copia tramite costruttore di copia
    Array<double> copyArray(defaultArray);  // Copia di defaultArray
    std::cout << "CopyArray size: " << copyArray.size() << std::endl;

    // Test dell'accesso agli elementi e dell'eccezione per l'indice fuori limite
    try {
        std::cout << "Value at index 2 in Default Array: " << defaultArray[2] << std::endl;
        std::cout << "Value at index 7 in Default Array: " << defaultArray[7] << std::endl; // Deve generare un'eccezione
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    // Modificare uno degli array non deve influire sull'altro
    defaultArray[2] = 42.0;
    std::cout << "Value at index 2 in Copy Array: " << copyArray[2] << std::endl;  // Dovrebbe essere diverso da 42.0

    return 0;
}
