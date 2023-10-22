#include <bits/stdc++.h>
using namespace std;
 
void Sort(int a[], int n)
{
    int i, k, j;
    for (i = 1; i < n; i++) {
        k = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > k) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = k;
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i<n ; i++){
        cin>>a[i];
    }
    Sort(a, n);
    
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
 
    return 0;
}