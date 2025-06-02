#include <iostream>

using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

public:
    Fraction() : numerator(0), denominator(1) {}

    Fraction(int num, int denom) {
        numerator = num;
        denominator = (denom != 0) ? denom : 1;
    }

    void simplify() {
        int gcbvalue = gcd(numerator, denominator);
        numerator /= gcbvalue;
        denominator /= gcbvalue;
    }

    Fraction multiply(const Fraction& other) const {
        int newNumerator = numerator * other.numerator;

        int newDenominator = denominator * other.denominator;

        Fraction result(newNumerator, newDenominator);

        result.simplify();

        return result;
    }

    void display() const {
        std::cout << numerator << "/" << denominator;
    }
};

int main() {
    Fraction f1(1, 2);
    Fraction f2(3, 4);

    Fraction product = f1.multiply(f2);

    cout << "곱한 결과 : ";
    product.display();
    cout << endl;

    return 0;
}
