#include <bits/stdc++.h>
using namespace std;

int Josephus(int N, int k)
{
    int i = 2, ans = 0;
 
    while (i <= N) {
        ans = (ans + k) % i;
        i++;
    }
 
    return ans + 1;
}

int main()
{
    int N, k;
    cin >> N >> k;
    cout << Josephus(N, k) << endl;
    return 0;
}
// This is josephus problem. Fixed Bugs :) 