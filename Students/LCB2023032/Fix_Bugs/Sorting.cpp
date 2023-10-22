#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


void merge( ll l , ll r ,ll mid, vector<ll>& arr){
    
    ll size_temp1 = mid - l + 1;
    ll size_temp2 = r - mid;
    vector<ll> temp1(size_temp1), temp2(size_temp2);
    
    

    for(ll i = 0; i< size_temp1;++i){
        temp1[i] = arr[i+l];
    }
    for(ll i = 0; i< size_temp2 ;++i){
        temp2[i] = arr[i+mid+1];
    }
    
    ll point_temp1 = 0, point_temp2 = 0, point_arr = l;

    while(point_temp1<size_temp1 && point_temp2 <size_temp2){
        if(temp1[point_temp1]<temp2[point_temp2]){
            arr[point_arr++] = temp1[point_temp1++];
        }
        else{
            arr[point_arr++] = temp2[point_temp2++];
        }
        
    }

    while(point_temp1<size_temp1){
        arr[point_arr++] = temp1[point_temp1++];
    }
    while(point_temp2<size_temp2){
        arr[point_arr++] = temp2[point_temp2++];
    }

}



void merge_sort( ll l , ll r , vector<ll>& arr){
    if(l<r){
        ll mid = (l+r)>>1;
        // cout<<"mid: "<<mid<<endl;
        merge_sort(l,mid,arr);
        // cout<<"completed 49 r:"<<r<<endl;
        merge_sort(mid+1,r,arr);

        merge(l,r,mid,arr);
    }
}




int main(){
    ll n;
    cin>>n;
    // cout<<"stated \n";
    vector<ll> arr(n);
    // cout<<"arr defined \n";
    for(int i = 0; i<n;++i){
        cin>>arr[i];
    }
    // cout<<"before soring \n";
    // for(int i = 0; i<n;++i){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<"\n"<<endl;
    merge_sort(0,n-1,arr);
    // cout<<"after soring \n";
    for(int i = 0; i<n;++i){
        cout<<arr[i]<<" ";
    }
    cout<<"\n"<<endl;
    return 0;
}