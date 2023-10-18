#include <bits/stdc++.h>
using namespace std;

int findMissingNumber(vector<int>& nums) {
	sort(nums.begin(), nums.end());
	int n = nums.size();
	for (int i = 1; i <= n; i++) {
    	if (nums[i - 1] != i) {	
        	return i;
    	}
	}
	return n;
}

int main() {
	int n;
	cin >> n;
	vector<int> nums(n);
	for (int i = 0; i < n; i++) {
    	cin >> nums[i];
	}
	int missing_number = findMissingNumber(nums);
	cout << missing_number << endl;
	return 0;
}

// There are few Logical errors in the code. Fix them and submit the code.

