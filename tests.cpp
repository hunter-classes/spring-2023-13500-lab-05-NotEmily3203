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

TEST_CASE("Prime Cases"){
    CHECK(isPrime(2)==true);
    CHECK(isPrime(13)==true);
}

TEST_CASE("Not Prime Cases"){
    CHECK(isPrime(25)==false);
    CHECK(isPrime(4)==false);
}