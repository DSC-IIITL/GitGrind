#include <iostream>
using namespace std;

int GCD(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return GCD(b, a % b);
    }
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    int gcd = GCD(num1, num2);
    cout << "GCD: " << gcd << endl;
    return 0;
}

// Provide an another approach to solve the above question 
// (Do you want a hint?).