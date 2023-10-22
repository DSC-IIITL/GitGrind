#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    char c;
    cin >> c;
	//using c++ given function
    int cnt = count(s.begin(), s.end(), c);
    cout << cnt << endl;
}
