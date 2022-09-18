#include <iostream>

#include "person/person.hpp"

int main() {
    const Person person(PersonType::male, 1.8, 60);
    person.say();

    int k = (int)100.0;
    std::cout << "k is " << k << std::endl;
}