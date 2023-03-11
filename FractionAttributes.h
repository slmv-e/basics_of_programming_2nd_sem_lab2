//
// Created by Erik Salimov on 28.02.2023.
//

#ifndef INC_2ND_SEM_LAB2_FRACTIONATTRIBUTES_H
#define INC_2ND_SEM_LAB2_FRACTIONATTRIBUTES_H
#include <iostream>


class FractionAttributes {
    private:
        int nominator;
        int denominator;

        friend std::ostream& operator<<(std::ostream& os, FractionAttributes& coordinates);
        friend std::istream& operator>>(std::istream& is, FractionAttributes& coordinates);
    public:
        FractionAttributes();
        FractionAttributes(int nominator, int denominator);

        [[nodiscard]] int getNominator() const;
        [[nodiscard]] int getDenominator() const;
        void setNominator(int value);
        void setDenominator(int value);
};


#endif //INC_2ND_SEM_LAB2_FRACTIONATTRIBUTES_H
