#include <bits/stdc++.h>

using namespace std;

vector<int> nextGreaterElements(vector<int>& nums) {
    int n = nums.size();
    nums.resize(2 * n);
    vector<int> res(n, -1);
    stack<int> st;

    for (int i = 0; i < 2 * n; i++) {
      nums[i] = nums[i - n];
      while (!st.empty() && nums[i % n] > nums[st.top()]) { 
        int idx =st.top();
        st.pop();
        res[idx] = nums[i % n];
      }
      st.push(i % n);
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
