/*
 * Unit testing for the Rectangle class
 */
//#define CATCH_CONFIG_RUNNER
#define CATCH_CONFIG_MAIN  // Catch supplies a main program
#include "../rectangle.h"
#include "catch.hpp"

static int score = 0;
TEST_CASE("Testing Rectangle constructors") {
    Rectangle r;
    REQUIRE(1 == r.getWidth());
    REQUIRE(1 == r.getLength());
    Rectangle r2(10, 5);
    REQUIRE(10 == r2.getLength());
    REQUIRE(5 == r2.getWidth());
    score += 10;
}
TEST_CASE("Testing Rectangle getters/setters") {
    Rectangle r(10, 5);

    SECTION("Test getters") {
        REQUIRE(5 == r.getWidth());
        REQUIRE(10 == r.getLength());
        score += 10;
    }
    SECTION("Test setters") {
        r.setWidth(2);
        r.setLength(8);
        REQUIRE(2 == r.getWidth());
        REQUIRE(8 == r.getLength());
        r.setWidth(-3);
        REQUIRE(1 == r.getWidth());
        REQUIRE(8 == r.getLength());
        score += 10;
    }

}

TEST_CASE("Testing Rectangle Area") {
    Rectangle r(10, 5);
    REQUIRE(50 == r.area());
    score += 10;
}

TEST_CASE("Testing Overloaded ==") {
    Rectangle r1(5, 6), r2(5, 6), r3;
    REQUIRE(r1 == r2);
    REQUIRE_FALSE(r1 == r3);
    score += 10;
}

TEST_CASE("Rectangles with default dimensions") {
    GIVEN("A default rectangle") {
        Rectangle r;
        REQUIRE(1 == r.getLength());
        REQUIRE(1 == r.getWidth());
        REQUIRE(1.0 == r.area());

        WHEN("length is doubled") {
            r.setLength(r.getLength() * 2);

            THEN("The area is also doubled") {
                REQUIRE(2 == r.area());
            }
        }
    }
    score += 10;
    cout << "\n==========================================" << endl;
    cout << "\033[1;33m" <<  " Score: " << score << "/60" << "\033[1;35m"
         << " (passed " << score / 10 << " out of " << 6 << " tests)" << "\033[0m" << endl;
    cout << "==========================================\n" << endl;
}