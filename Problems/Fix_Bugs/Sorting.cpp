#include <bits/stdc++.h>

using namespace std;

const long long MOD = 1000000007;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

void merge(int start, int mid, int end, vector<ll>& arr, vector<ll>& A, vector<ll>& tmp, vector<ll>& tmp1) {
	int p = start;
	int q = mid;
	int r = p;

	while (p < mid && q <= end) {
    	if (arr[p] >= arr[q]) { 
        	tmp1[r] = A[p];
        	tmp[r++] = arr[p++];
    	} else {
        	tmp1[r] = A[q];
        	tmp[r++] = arr[q++];
    	}
	}

	while (p < mid) {
    	tmp1[r] = A[p];
    	tmp[r++] = arr[p++];
	}

	while (q <= end) {
    	tmp1[r] = A[q];
    	tmp[r++] = arr[q++];
	}

	for (p = start; p <= end; ++p) {
    	arr[p] = tmp[p];
    	A[p] = tmp1[p];
	}
}

void merge_sort(int l, int r, vector<ll>& arr, vector<ll>& A, vector<ll>& tmp, vector<ll>& tmp1) {
	if (l < r) {
    	int mid = (l + r) >> 1;
    	merge_sort(l, mid, arr, A, tmp, tmp1);
    	merge_sort(mid + 1, r, arr, A, tmp, tmp1); 
    	merge(l, mid + 1, r, arr, A, tmp, tmp1); 
	}
}

int main() {

	ll n, i, x, y;
	cin >> n;
	x = 0;

	vector<ll> A(n), arr(n), tmp(n), tmp1(n);

	for (i = 0; i < n; ++i) {
    	cin >> A[i];
    	if (A[i] < x) x = A[i]; 
	}

	y = 1;
	ll I = 1;

	while (x / I) {
    	for (i = 0; i < n; ++i) {
        	arr[i] = (A[i] / I) % 100000;
    	}
    	merge_sort(0, n - 1, arr, A, tmp, tmp1);

    	for (i = 0; i < n; ++i) {
        	cout << A[i] << " ";
    	}
    	cout << "\n";
    	I *= 100000;
	}

	return 0;
}

// There are few Logical errors in the code. Fix them and submit the code.