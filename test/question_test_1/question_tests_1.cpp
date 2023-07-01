#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include "question1.h"

int calculatePoints(int widgetsSold) {
    if (widgetsSold >= 1 && widgetsSold <= 5) {
        return widgetsSold * 1;
    } else if (widgetsSold >= 6 && widgetsSold <= 10) {
        return widgetsSold * 5;
    } else if (widgetsSold >= 11 && widgetsSold <= 15) {
        return widgetsSold * 10;
    } else if (widgetsSold >= 16) {
        return widgetsSold * 15;
    }
}

TEST_CASE("Test Case 1") {
    int expected = 3;
    int result = calculatePoints(3);
    REQUIRE(result == expected);
}

TEST_CASE("Test Case 2") {
    int expected = 45;
    int result = calculatePoints(9);
    REQUIRE(result == expected);
}

TEST_CASE("Test Case 3") {
    int expected = 110;
    int result = calculatePoints(11);
    REQUIRE(result == expected);
}

TEST_CASE("Test Case 4") {
    int expected = 300;
    int result = calculatePoints(20);
    REQUIRE(result == expected);
}