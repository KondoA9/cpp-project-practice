#define CATCH_CONFIG_MAIN

#include "person/person.hpp"

#include <catch2/catch.hpp>

TEST_CASE("height() and weight()", "[person]") {
    const Person male(PersonType::male, 1.8, 60);
    REQUIRE(male.height() == 1.8);
    REQUIRE(male.weight() == 60);
}

TEST_CASE("say()", "[person]") {
    const Person male(PersonType::male, 1.8, 60);
    male.say();

    const Person female(PersonType::female, 1.5, 40);
    female.say();
}

TEST_CASE("bmi()", "[person]") {
    const double height = 1.8, weight = 60;
    const Person male(PersonType::male, height, weight);
    REQUIRE(male.bmi() == weight / (height * height));
}
