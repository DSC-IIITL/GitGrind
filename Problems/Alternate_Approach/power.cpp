#include <iostream>
using namespace std;

double Power(double base, int exponent) {
    double result = 1.0;
    if (exponent < 0) {
        base = 1.0 / base;
        exponent = -exponent;
    }
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result *= base;
        }
        base *= base;
        exponent /= 2;
    }
    return result;
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

// Provide an another/alternate approach to solve the above question 
// (Do you want a hint?).