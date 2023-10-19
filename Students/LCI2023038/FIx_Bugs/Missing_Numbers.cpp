#include <bits/stdc++.h>
using namespace std;

int findMissingNumber(vector<int>& nums) {
	//sort(nums.begin(), nums.end());
	int n = nums.size();
    int hsh[n+1];
    
    for (int i = 0; i <= n; i++)
        hsh[i] = 0;

	for (int i = 1; i <= n; i++) {
    	// if (nums[i - 1] != i) {	
        // 	return i;
    	// }
        hsh[nums[i-1]]++;
	}
	
    // for(int i=1; i<n+1 ;i++){
    //     if(hsh[i] == 0){
    //         return nums[i];
    //     }
    // }

    for (int i = 1; i <= n; i++) {
    	if(hsh[i] == 0)
            return i;
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
    if(missing_number == -1){
        cout<<"No number is missing"<<endl;
    }else{
        cout << missing_number << endl;
    }
	return 0;
}

// There are few Logical errors in the code. Fix them and submit the code.
//->this code just shows the first missing num from the reange 1 to num for seeing alll of them we can find a vector of nums with hash =0
