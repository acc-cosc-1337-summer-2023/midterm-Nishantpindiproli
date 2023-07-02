#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Test get_kinetic_energy") {
    SECTION("Positive values") {
        double kilograms = 5.0;
        double velocity = 10.0;
        double expected = 250.0;
        double result = get_kinetic_energy(kilograms, velocity);
        REQUIRE(result == expected);
    }

    SECTION("Zero values") {
        double kilograms = 0.0;
        double velocity = 0.0;
        double expected = 0.0;
        double result = get_kinetic_energy(kilograms, velocity);
        REQUIRE(result == expected);
    }

    SECTION("Negative values") {
        double kilograms = -2.0;
        double velocity = 4.0;
        double expected = 16.0;
        double result = get_kinetic_energy(kilograms, velocity);
        REQUIRE(result == expected);
    }
}

TEST_CASE("Test test_config") {
    SECTION("Check return value") {
        bool result = test_config();
        REQUIRE(result == true);
    }
}
