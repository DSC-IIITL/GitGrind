#include <iostream>
using namespace std;

double Power(double base, int exponent) {
    if (exponent == 0) {
        return 1.0;
    }
    if (exponent < 0) {
        base = 1.0 / base;
        exponent = -exponent;
    }
    if (exponent % 2 == 0) {
        double halfExponent = Power(base, exponent / 2);
        return halfExponent * halfExponent;
    } else {
        double halfExponent = Power(base, (exponent - 1) / 2);
        return base * halfExponent * halfExponent;
    }
}


int main() {
    double base;
    int exponent;
    cin >> base;
    cin >> exponent;
    double result = Power(base, exponent);
    cout << "Result: " << result << endl;
    return 0;
}
