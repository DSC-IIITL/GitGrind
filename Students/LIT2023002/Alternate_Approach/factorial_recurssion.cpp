// Code to find factorial of a number using recurssion

#include<bits/stdc++.h>

using namespace std;

// Recursive function to find factorial of a number
long long int factorial(long long int n){
    if(n==0) return 1;
    
    return n*factorial(n-1);
}


int main(){

    long long int n;
    cin>>n; // Input number
    cout<<factorial(n)<<endl; // Print factorial of n
return 0;
}