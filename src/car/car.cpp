#include "car.hpp"

double Car::sumWeight() const {
    double sum = 0.0;
    for (const auto& person : m_people) {
        sum += person.weight();
    }
    return sum;
}