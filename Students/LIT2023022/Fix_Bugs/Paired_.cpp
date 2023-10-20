#include <bits/stdc++.h>
using namespace std;

int countPairedCharacters(int n, string s) {
	unordered_map<char, int> d;
	int c = 0;

	for (int i = 1; i < 2 * n - 2; i += 2) { 
    	if (s[i] - 32 != s[i + 1]) {
        	d[s[i]]++;
        	if (d[s[i + 1] + 32] != 0) {
            	d[s[i + 1] + 32]--;
        	} else {
            	c--;
        	}
    	}
	}

	return c;
}

int main() {
	int n;
	cin >> n;
	string s;
	cin >> s;

	int result = countPairedCharacters(n, s);

	cout << result << endl;

	return 0;
}

// There are few Logical errors in the code. Fix them and submit the code.