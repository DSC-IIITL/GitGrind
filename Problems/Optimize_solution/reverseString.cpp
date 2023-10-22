// Provide an optimized solution for reversing a string

#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;

    cout<<"Initial String: "<<s<<endl;
    string s1;
    for(int i=0;i<s.length();i++){
        s1=s1+s[s.length()-i-1];
    }
    cout<<"Reversed String: "<<s1<<endl;
}
