#define CATCH_CONFIG_MAIN

#include "module/module.hpp"

#include <catch2/catch.hpp>

TEST_CASE("Say hello", "[module]") {
    Module::sayHello();
}
