#define CATCH_CONFIG_MAIN

#include "person/person.hpp"

#include <catch2/catch.hpp>

TEST_CASE("say", "[person]") {
    const Person male(PersonType::male);
    male.say();

    const Person female(PersonType::female);
    female.say();
}
