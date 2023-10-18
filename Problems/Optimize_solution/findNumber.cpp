// Find the given element in the array 
//! Hint: Try using binary search 

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the element to be search in the given array: ";
    int x;
    cin>>x;
    for(int i=0;i<n;i++){
        if(a[i]==x){
            cout<<"Element found at index "<<i<<" in the given array";
            return 0;
        }
    }
    cout<<"Element not found in the given array";
    return 0;
}