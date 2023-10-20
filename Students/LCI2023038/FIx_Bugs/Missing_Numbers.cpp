#include <bits/stdc++.h>
using namespace std;

int findMissingNumber(vector<int>& nums) {
	sort(nums.begin(), nums.end());
	int n = nums.size();
    unordered_set<int> alreadyThere;
    for(int num : nums)
        alreadyThere.insert(num);

	for (int i = 1; i <= n; i++) {
    	if (nums[i - 1] != i && alreadyThere.find(i)==alreadyThere.end()) {	
        	return i;
    	}
	}
	return -1;
}

int main() {
	int n;
	cin >> n;
	vector<int> nums(n);
	for (int i = 0; i < n; i++) {
    	cin >> nums[i];
	}
	int missing_number = findMissingNumber(nums);
	cout << missing_number << endl;//this ocde returns -1 if all the elements are present
	return 0;
}

// There are few Logical errors in the code. Fix them and submit the code.

