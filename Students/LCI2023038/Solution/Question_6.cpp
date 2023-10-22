#include <bits/stdc++.h>
using namespace std;

int evenSum(vector<int>& arr) {
	int eveSum = 0;
	for(int item : arr){
		if(item%2 == 0){
			eveSum+=item;
		}
	}
	return eveSum;
}

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
    	cin >> arr[i];
	}
	int even_sum = evenSum(arr);
	cout << even_sum << endl;
	return 0;
}
