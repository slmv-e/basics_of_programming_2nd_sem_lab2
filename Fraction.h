//
// Created by Erik Salimov on 28.02.2023.
//

#ifndef INC_2ND_SEM_LAB2_FRACTION_H
#define INC_2ND_SEM_LAB2_FRACTION_H
#include "FractionAttributes.h"


class Fraction {
    private:
        FractionAttributes attributes;
        static Fraction fractionSubtract(Fraction& u, Fraction& v);
        static Fraction fractionDivision(Fraction& u, Fraction& v);
        void fractionReduce();
    public:
        Fraction();
        Fraction(int nominator, int denominator);
        explicit Fraction(FractionAttributes attributes);

        Fraction operator-(Fraction& v);
        Fraction operator/(Fraction& v);

        FractionAttributes& getAttributes();
        void setAttributes(FractionAttributes& value);

        void printAttributes(bool addEndLine);
};


#endif //INC_2ND_SEM_LAB2_FRACTION_H
