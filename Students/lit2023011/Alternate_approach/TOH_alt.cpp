#include <iostream>
using namespace std;

void TOH(int n,char A,char B,char C){
    if(n>0){
        TOH(n-1,A,C,B);
        cout<<"Move a Disc from "<<A<<" to "<<C<<endl;
        TOH(n-1,B,A,C);
    }
}                                   
int main() {
    int num_disks;
    cout << "Enter the number of disks: ";
    cin >> num_disks;
    TOH(num_disks,'A','B','C');
    return 0;
}
