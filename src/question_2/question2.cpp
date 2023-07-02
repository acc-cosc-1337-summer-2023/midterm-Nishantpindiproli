#include "question2.h"

std::string decimal_to_hex(int value) {
    std::string hex;

    if (value >= 1 && value <= 512) {
        while (value > 0) {
            int remainder = value % 16;
            if (remainder < 10) {
                hex.insert(0, 1, '0' + remainder);
            } else {
                hex.insert(0, 1, 'A' + remainder - 10);
            }
            value /= 16;
        }
    } else {
        hex = "Invalid input!";
    }

    return hex;
}