#include "Fraction.h"

int main() {
    Fraction a, b(5, 500);
    Fraction subtract = a - b;
    Fraction division = a / b;
    subtract.printAttributes(true);
    subtract.printAttributes(false);
    return 0;
}
