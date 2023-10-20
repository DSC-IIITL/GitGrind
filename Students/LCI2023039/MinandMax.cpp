// Find the minimum and maximum element of the array 
//! Hint: Try using inbuilt c++ function to find the minimum and maximum element in the given array

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    cout<<"max element of array is :"<<*max_element(v.begin(),v.end())<<endl;
    cout<<"min element of array is :"<<*min_element(v.begin(),v.end());

    

}