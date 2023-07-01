#include <iostream>
#include <limits>
#include "question2.h"

int getValidatedInput() {
    int value;
    while (true) {
        std::cout << "Enter an integer value (1 to 512): ";
        std::cin >> value;

        if (std::cin.fail()) {
            std::cout << "Invalid input. Please enter a valid integer.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else if (value < 1 || value > 512) {
            std::cout << "Value is out of range. Please enter a value between 1 and 512.\n";
        } else {
            break;
        }
    }
    return value;
}

int main() {
    char choice;
    do {
        int value = getValidatedInput();

        std::string hex = decimal_to_hex(value);

        std::cout << "Hexadecimal value: " << hex << std::endl;

        std::cout << "Do you want to continue (y/n)? ";
        std::cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}