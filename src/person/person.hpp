#pragma once

enum class PersonType { male, female };

class Person {
private:
    const PersonType m_personType;

    double m_height, m_weight;

public:
    // height [m]
    // weight [kg]
    explicit Person(PersonType personType, double height, double weight);

    double height() const;

    double weight() const;

    double bmi() const;

    void say() const;
};