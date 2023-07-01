#include "question4.h"
#include <vector>
bool test_config()
{
    return true;

}
std::vector<double> get_cookie_ingredients(int cookies){
     std::vector<double> ingredients;
     double sugar = (1.5 / 48.0) * cookies;
    double butter = (1.0 / 48.0) * cookies;
    double flour = (2.75 / 48.0) * cookies;
    ingredients.push_back(sugar);
    ingredients.push_back(butter);
    ingredients.push_back(flour);

    return ingredients;
}    

