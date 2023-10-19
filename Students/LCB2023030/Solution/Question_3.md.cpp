#include <iostream>
#include <stdio.h>
#include <vector>
#include <array>
#include <string>
#include <set>
#include <algorithm>
#include <utility>
using namespace std;
int main()
{
    int t{};
    cin >> t;
    for (int i{}; i < t; ++i)
    {
        int n, k;
        cin >> n >> k;
        int chocolate = n;
        int c = n / k;
        if ((n%k) == 0)
        {
            cout << n << '\n';
            continue;
        }
        while (n > k)
        {
            n = n - k;
        }
        int e = k / 2;
        
        cout << chocolate - (chocolate % k) + e << '\n';
    }
    return 0;
}