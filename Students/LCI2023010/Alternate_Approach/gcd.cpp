#include<bits/stdc++.h>
using namespace std;

 int main()
 {
    int m,n,max,l,g;
    cout<<"Enter any two numbers:\n";
    cin>>m>>n;
    max=(m>n) ? m:n;
    do
    {
      if(max%m==0 && max%n==0)
      {
        l=max;
        break;
      }
      else
      ++max;
    } while (1);
   g=(m*n)/l;
   cout<<"GCD is "<<g;  
   return 0;
 }