#pragma once

#include <iostream>

enum class PersonType { male, female };

class Person {
    const PersonType m_personType;

public:
    explicit Person(PersonType personType) : m_personType(personType) {}

    void say() const {
        switch (m_personType) {
        case PersonType::male:
            std::cout << "I am male." << std::endl;
            break;

        case PersonType::female:
            std::cout << "I am female." << std::endl;
            break;

        default:  // LCOV_EXCL_START
            std::cout << "Who am I." << std::endl;
            break;  // LCOV_EXCL_END
        }
    }
};