#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int compare(map<char,int>,map<char,int>);
int compare(map<char,int>mpp,map<char,int>mpp2){
    int c=0;
    for (auto it:mpp){
        if (it.second!=mpp2[it.first]){
            c=0;
            return 0;
        }
        else{
            c=1;
        }

    }
    if (c>0){
        return 1;
    }
    return 0;
}

int func(vector <string> vec,int n){
    map<string,int> mpp3;
    for (int i=0;i<n;++i){
        map<char,int> mpp;
        for(int k=0;k<vec[i].size();++k){
            string s1=vec[i];
            mpp[s1[k]]++;
        }
        for (int j=i+1;j<n;++j){
            map<char,int> mpp2;
            for(int k=0;k<vec[j].size();++k){
                string s2=vec[j];
                mpp2[s2[k]]++;
                mpp3[vec[i]]+=compare(mpp,mpp2);
            } 
        }
    }
    int max=0;
    string st;
    for (auto it:mpp3){
        if (max<it.second){
            max=it.second;
            st=it.first;
        }
    }
    cout<<st<<endl;
    return 0;
}

int main(){
    int n;
    cin>>n;
    vector <string> v;
    for(int i=0;i<n;++i){
        string s;
        cin>>s;
        v.push_back(s);
    }

    func(v,n);
}