#include <bits/stdc++.h>
using namespace std;

int Josephus(int N, int k)
{
    int i = 1, ans = 0;
 
    while (i <= N) {
        ans = (ans + k) % i;
        i++;
    }
 
    return ans;
}

int main()
{
    int N, k;
    cin >> N >> k;
    cout << Josephus(N, k) << endl;
    return 0;
}
// This is josephus problem. It has few bugs!! Fix them. 
