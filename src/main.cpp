#include <iostream>

#include "module/module.hpp"

int main() {
    Module::sayHello();

    int k = (int)100.0;
    std::cout << "k is " << k << std::endl;
}