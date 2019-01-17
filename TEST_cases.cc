/*
 * Unit testing for the Rectangle class
 */
//#define CATCH_CONFIG_RUNNER
#define CATCH_CONFIG_MAIN       //Catch supplies a main program
#include "catch.hpp"
#include "rectangle.h"

TEST_CASE("Testing Rectangle constructors") {
    Rectangle r;
    REQUIRE(r.getWidth() == 1);
    REQUIRE(r.getLength() == 1);
    Rectangle r2(10, 5);
    REQUIRE(r2.getLength() == 10);
    REQUIRE(r2.getWidth() == 5);
}
TEST_CASE("Testing Rectangle getters/setters") {
    Rectangle r(10, 5);
    SECTION("Test getters") {
        REQUIRE(r.getWidth() == 5);
        REQUIRE(r.getLength() == 10);
    }
    SECTION("Test setters") {
        r.setWidth(2);
        r.setLength(8);
        REQUIRE(r.getWidth() == 2);
        REQUIRE(r.getLength() == 8);
        r.setWidth(-3);
        REQUIRE(r.getWidth() == 1);
        REQUIRE(r.getLength() == 8);
    }
}

TEST_CASE("Testing Rectangle Area") {
    Rectangle r(10, 5);
    REQUIRE(r.area() == 50);
}

TEST_CASE("Testing Overloaded ==") {
    Rectangle r1(5, 6), r2(5, 6), r3;
    REQUIRE(r1 == r2);
    REQUIRE_FALSE(r1 == r3);
}
