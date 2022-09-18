#include "person.hpp"

#include <iostream>

Person::Person(PersonType personType, double height, double weight) :
    m_personType(personType), m_height(height), m_weight(weight) {}

double Person::height() const {
    return m_height;
}

double Person::weight() const {
    return m_weight;
}

double Person::bmi() const {
    return m_weight / (m_height * m_height);
}

void Person::say() const {
    switch (m_personType) {
    case PersonType::male:
        std::cout << "I am male." << std::endl;
        break;

    case PersonType::female:
        std::cout << "I am female." << std::endl;
        break;

        // LCOV_EXCL_START
    default:
        std::cout << "Who am I." << std::endl;
        break;
        // LCOV_EXCL_STOP
    }
}