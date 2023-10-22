#include <bits/stdc++.h>
using namespace std;

int Josephus(int N, int k) {
    if (N == 1) {
        return 1;
    } else {
        return (Josephus(N - 1, k) + k - 1) % N + 1;
    }
}

int main() {
    int N, k;
    cin >> N >> k;

    cout << Josephus(N, k) << endl;
    return 0;
}
