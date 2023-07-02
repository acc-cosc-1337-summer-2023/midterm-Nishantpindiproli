#include <iostream>
#include "question2.h"

int main() {
    int value;
    char cont;

    do {
        std::cout << "Enter an integer value (1-512): ";
        std::cin >> value;

        std::string hex = decimal_to_hex(value);
        std::cout << "Hexadecimal value: " << hex << std::endl;

        std::cout << "Do you want to continue (Y/N)? ";
        std::cin >> cont;
    } while (cont == 'Y' || cont == 'y');

    return 0;
}