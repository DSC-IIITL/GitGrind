// Find the minimum and maximum element of the array 
//! Hint: Try using inbuilt c++ function to find the minimum and maximum element in the given array

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }

    cout<<"Maximum element: "<<max<<", Minimum element: "<<min;
}