#include "Fraction.h"

int main() {
    Fraction a, b(5, 500);
    Fraction res = a / b;
    res.printAttributes(false);
    return 0;
}
