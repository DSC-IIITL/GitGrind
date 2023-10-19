#include <iostream>

int longestSubarrayLength(int arr[], int n, int k) {
    int maxLength = 0;

    for (int start = 0; start < n; ++start) {
        int sum = 0;
        for (int end = start; end < n; ++end) {
            sum += arr[end];
            if (sum <= k) {
                int subarrayLength = end - start + 1;
                maxLength = std::max(maxLength, subarrayLength);
            } else {
                break;  // The sum exceeds k, no need to continue this subarray
            }
        }
    }

    return maxLength;
}

int main() {
    int n, k;

    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "Enter the value of k: ";
    std::cin >> k;

    int result = longestSubarrayLength(arr, n, k);
    std::cout << "Length of the longest subarray with sum less than or equal to " << k << " is: " << result << std::endl;

    return 0;
}
