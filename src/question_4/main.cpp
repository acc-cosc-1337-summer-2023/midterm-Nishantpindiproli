#include <iostream>
#include <vector>
#include "question4.cpp"

int main()
{
    int cookies;
    while (true) {
        std::cout << "Enter the number of cookies: ";
        std::cin >> cookies;
        std::vector<double> ingredients = get_cookie_ingredients(cookies);
        std::cout << "First ingredient: " << ingredients[0] << std::endl;
        std::cout << "Third ingredient: " << ingredients[2] << std::endl;
        std::cout << "Last ingredient: " << ingredients[ingredients.size() - 1] << std::endl;

        char cont;
        std::cout << "Do you want to continue (Y/N)? ";
        std::cin >> cont;
        if (cont == 'N' || cont == 'n') {
            break;
        }
    }

    return 0;
}