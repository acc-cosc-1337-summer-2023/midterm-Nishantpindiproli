#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Decimal to Hexadecimal Conversion") {
    SECTION("Valid input") {
       
        REQUIRE(decimal_to_hex(10) == "A");
        REQUIRE(decimal_to_hex(170) == "AA");
        REQUIRE(decimal_to_hex(255) == "FF");
    }

    SECTION("Invalid input") {
        
        REQUIRE(decimal_to_hex(513) == "Invalid input!");
    }
}
