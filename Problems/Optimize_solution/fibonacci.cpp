// Print the fibonacci series upto the given number

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a=0,b=1,c=b;
    cout<<a<<" ";
    while (c<=n)
    {
        cout<<b<<" ";
        c=a+b;
        a=b;
        b=c;
    }
    
}