/*
 * Unit testing for the Rectangle class
 */
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "rectangle.h"

TEST_CASE( "Testing Rectangle default constructor") {
    Rectangle r;
    REQUIRE(r.getWidth() == 1);
    REQUIRE(r.getLength() == 1);
}
TEST_CASE( "Testing Rectangle constructor") {
    Rectangle r(10, 5);
    REQUIRE(r.getWidth() == 5);
    REQUIRE(r.getLength() == 10);
}
TEST_CASE( "Testing setters") {
    Rectangle r;
    r.setWidth(5);
    r.setLength(10);
    REQUIRE(r.getWidth() == 5);
    REQUIRE(r.getLength() == 10);
    r.setWidth(-3);
    REQUIRE(r.getWidth() == 1);
    REQUIRE(r.getLength() == 10);
}
TEST_CASE( "Testing Rectangle Area") {
    Rectangle r(10, 5);
    REQUIRE(r.area() == 50);
}

TEST_CASE("Testing Overloaded ==") {
    Rectangle r1(5,6), r2(5, 6), r3;
    REQUIRE(r1 == r2);
    REQUIRE_FALSE(r1 == r3);
}
