#define CATCH_CONFIG_MAIN

#include "car/car.hpp"

#include <catch2/catch.hpp>

TEST_CASE("sumWeight()", "[car]") {
    const Car car({
        Person{PersonType::male, 1.8, 60},
        Person{PersonType::male, 1.7, 55},
        Person{PersonType::female, 1.5, 40},
    });
    REQUIRE(car.sumWeight() == 60 + 55 + 40);
}
