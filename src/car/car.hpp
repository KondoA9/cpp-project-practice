#pragma once

#include <numeric>
#include <vector>

#include "../person/person.hpp"

class Car {
private:
    std::vector<Person> m_people;

public:
    explicit Car(const std::vector<Person>& people) : m_people(people) {}

    double sumWeight() const;
};