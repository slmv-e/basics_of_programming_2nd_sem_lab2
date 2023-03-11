//
// Created by Erik Salimov on 28.02.2023.
//

#include <iostream>
#include <cmath>
#include "Fraction.h"

Fraction Fraction::fractionSubtract(Fraction &u, Fraction &v) {
    return {
        u.attributes.getNominator() * v.attributes.getDenominator() - u.attributes.getDenominator() * v.attributes.getNominator(),
        u.attributes.getDenominator() * v.attributes.getDenominator()
    };
}

Fraction Fraction::fractionDivision(Fraction &u, Fraction &v) {
    return {
            u.attributes.getNominator() * v.attributes.getDenominator(),
            v.attributes.getNominator() * u.attributes.getDenominator()
    };
}

Fraction::Fraction() {
    std::cin >> attributes;
    fractionReduce();
}

Fraction::Fraction(FractionAttributes attributes) {
    this->attributes = attributes;
    fractionReduce();
}

Fraction::Fraction(int nominator, int denominator) {
    attributes = FractionAttributes(nominator, denominator);
    fractionReduce();
}

Fraction Fraction::operator-(Fraction &v) {
    return Fraction::fractionSubtract(*this, v);
}

Fraction Fraction::operator/(Fraction &v) {
    return Fraction::fractionDivision(*this, v);
}

FractionAttributes& Fraction::getAttributes() {
    return attributes;
}

void Fraction::setAttributes(FractionAttributes &value) {
    attributes = value;
}

void Fraction::printAttributes(bool addEndLine) {
    std::cout << attributes;
    addEndLine && std::cout << std::endl;
}

void Fraction::fractionReduce() {
    int nominator = attributes.getNominator();
    int denominator = attributes.getDenominator();
    int smallest = nominator > denominator ? denominator : nominator;
    int largest_common_divisor = 0;

    for (int i = 1; i < sqrt(smallest); i++) {
        if (nominator % i == 0 && denominator % i == 0 && i > largest_common_divisor) {
            largest_common_divisor = i;
        }
        if (nominator % (smallest / i) == 0 && denominator % (smallest / i) == 0 && (smallest / i) > largest_common_divisor) {
            largest_common_divisor = smallest / i;
        }
    }

    attributes.setNominator(nominator / largest_common_divisor);
    attributes.setDenominator(denominator / largest_common_divisor);
}
