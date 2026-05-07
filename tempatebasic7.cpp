#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator, denominator;

public:
    // Normal constructor
    Fraction(int n, int d) {
        numerator = n;
        denominator = d;
    }

    // Constructor casting: int → Fraction
    Fraction(int n) {
        numerator = n;
        denominator = 1;
    }

    // Getter functions
    int getNumerator() { return numerator; }
    int getDenominator() { return denominator; }

    // Overloaded casting operator: Fraction → double
    operator double() {
        return (double)numerator / denominator;
    }
};

int main() {
    Fraction f1(3, 4);   // 3/4
    Fraction f2(5);      // constructor casting → 5/1

    cout << "Fraction f1: " << f1.getNumerator() << "/" << f1.getDenominator() << endl;
    cout << "Fraction f2: " << f2.getNumerator() << "/" << f2.getDenominator() << endl;

    double d1 = f1;   // uses operator
    double d2 = f2;   // uses operator
    cout << "f1 as double: " << d1 << endl;
    cout << "f2 as double: " << d2 << endl;
}