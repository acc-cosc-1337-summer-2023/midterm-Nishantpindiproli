#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Test get_cookie_ingredients") {
    SECTION("Positive values") {
        int cookies = 24;
        std::vector<double> expected = {0.75, 0.5, 1.375};
        std::vector<double> result = get_cookie_ingredients(cookies);
        REQUIRE(result == expected);
    }

    SECTION("Zero values") {
        int cookies = 0;
        std::vector<double> expected = {0.0, 0.0, 0.0};
        std::vector<double> result = get_cookie_ingredients(cookies);
        REQUIRE(result == expected);
    }

    SECTION("Negative values") {
        int cookies = -12;
        std::vector<double> expected = {-0.375, -0.25, -0.6875};
        std::vector<double> result = get_cookie_ingredients(cookies);
        REQUIRE(result == expected);
    }
}

TEST_CASE("Test test_config") {
    SECTION("Check return value") {
        bool result = test_config();
        REQUIRE(result == true);
    }
}