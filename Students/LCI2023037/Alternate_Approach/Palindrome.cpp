#include<bits/stdc++.h>
using namespace std;
int power(int cnt)
{
    if(cnt==0)
    return 1;
    else 
    return 10*power(cnt-1);
}
int main()
{
    int n,cnt=0,sum=0,q,r;
    cin>>n;
    q=n;
    r=n;
    while(n>0)
    {
        cnt++;
        n=n/10;
    }
    while(cnt>0)
    {
       int p=q%10;
    sum=sum+p*power(cnt-1);
    q=q/10;
    cnt--;
    }
     if(r==sum)
     cout<<"Palindrome."<<endl;
     else
     cout<<" Not a Palindrome."<<endl;
     return 0;
}