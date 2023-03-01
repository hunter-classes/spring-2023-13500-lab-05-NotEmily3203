#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here
TEST_CASE("Divisible Cases"){
    CHECK(isDivisibleBy(100, 25)==true);
    CHECK(isDivisibleBy(33, 11)==true);
}

TEST_CASE("Indivisible Cases"){
    CHECK(isDivisibleBy(101, 25)==false);
    CHECK(isDivisibleBy(34, 11)==false);
}