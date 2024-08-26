#define CATCH_CONFIG_MAIN
#include "../catch.hpp"
#include "../src/maxmin.cpp"

TEST_CASE("MaxTest") {
    REQUIRE(MaxValue(3, 8) == 8);
}

TEST_CASE("MinTest") {
    REQUIRE(MinValue(3, 8) == 3);
}