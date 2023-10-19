// Print the fibonacci series upto the given number

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a=0,b=1,c=0;
    for(int i=1;i<=n;i++)
    {
        cout<<c<<" ";
        a=b;
        b=c;
        c=a+b;
    }
}