a#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int longest_Subarray_Length(int arr[], int n, int k) {
    map<int,int> mpp;
    long long sum=0;
    int maxlen=0;
    for (int i=0;i<n;++i){
        sum=sum+arr[i];
        mpp[sum]=i;
        if (sum==k){
            maxlen=max(maxlen,i+1);
        }
        int rem=sum-k;
        if (mpp.find(rem)!=mpp.end()){
            int l=i-mpp[rem];
            maxlen=max(maxlen,l);
        }
    }
    return maxlen;
}




int main(){
    int n, k;

    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Enter the value of k: ";
    cin >> k;

    int result = longest_Subarray_Length(arr, n, k);
    cout << "Length of the longest subarray with sum less than or equal to " << k << " is: " << result << endl;

    return 0;
}
