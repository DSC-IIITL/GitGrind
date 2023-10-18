#include "bits/stdc++.h"
using namespace std;
int main()
{
    int arr[10];
    for(int i=0;i<10;i++) {
        cin>>arr[i];
    }
    int sum = 0;
    for(int i=0;i<10;i++){
        sum += arr[i];
    }
    cout << "Sum of 10 numbers is = " << sum << "\n";
}