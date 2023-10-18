#include <bits/stdc++.h>

using namespace std;

vector<int> nextGreaterElements(vector<int>& nums) {
    int n = nums.size();
    nums.resize(2 * n);
    for (int i = n; i < 2 * n; i++) {
        nums[i] = nums[i - n];
    }
    vector<int> res(n);
    stack<int> st;

    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && nums[i] <= nums[st.top()]) { 
            st.pop();
        }
        int idx = i % n;
        res[idx] = st.empty() ? -1 : nums[st.top()]; 
        st.push(i);
    }

    return res;
}

int main() {
    int n;
    cout << "Enter the number of elements in the circular array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements separated by spaces: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> result = nextGreaterElements(nums);

    cout << "Next Greater Elements in Circular Array: ";
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}


// There are few Logical errors in the code. Fix them and submit the code.