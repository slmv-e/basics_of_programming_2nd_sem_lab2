//
// Created by Erik Salimov on 28.02.2023.
//

#include "FractionAttributes.h"

FractionAttributes::FractionAttributes() : FractionAttributes(1, 1) {}

FractionAttributes::FractionAttributes(int nominator, int denominator) {
    this->nominator = nominator;
    this->denominator = denominator;
}

int FractionAttributes::getNominator() const {
    return nominator;
}

int FractionAttributes::getDenominator() const {
    return denominator;
}

void FractionAttributes::setNominator(int value) {
    nominator = value;
}

void FractionAttributes::setDenominator(int value) {
    denominator = value;
}

std::ostream& operator<<(std::ostream& os, FractionAttributes& attributes) {
    os << attributes.nominator << "/" << attributes.denominator;
    return os;
}
std::istream& operator>>(std::istream& is, FractionAttributes& attributes) {
    is >> attributes.nominator >> attributes.denominator;
    return is;
}