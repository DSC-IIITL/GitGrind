// Provide an optimized approach to count number of times the given character repeated

#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    char c;
    cin>>c;
    int count=0;
    for(int i=0;i<s.length();i++){
        if(c==s[i]){
            count++;
        }
    }
    cout<<count<<endl;
}
