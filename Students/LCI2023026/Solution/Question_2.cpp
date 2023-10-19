#include<bits/stdc++.h>
using namespace std;

void solve(){
    // CODE HERE
    int a[4];
    int count=0;
    for(int i=0; i<4; i++){
        cin>>a[i];
        if(a[i]==1){
            count++;
        }
    }
    if(count==4){
        cout<<2<<"\n";
    }
    else if(count==0){
        cout<<0<<"\n";
    }
    else{
        cout<<1<<"\n";
    }
}

int main(){
    int t;
    // Uncomment for multiple testcases
    cin >> t; 
    while(t--){
        solve();
    }
    return 0;
}