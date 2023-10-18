// Finding the factorial of the given number
//! Hint: Try using recursive approach
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long num=1;
    for(int i=2;i<=n;i++){
        num*=i;
    }
    cout<<num;
}