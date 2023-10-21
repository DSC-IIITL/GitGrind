#include <bits/stdc++.h>
using namespace std;

int countPairedCharacters(int n, string s)  
{
	int freq[256]={0};
	int cnt = 0;
	for (int i = 0; i < 2*n; i=i+2)       
	{
        freq[s[i]]++;                             // updating frequency of charcters
	}

    for (int i=0;i<26; i++) {               
        cnt=cnt+min(freq[65+i],freq[97+i]);       //to include count of pair exactly once 
    } 
	return cnt;
}


int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;

	int result = countPairedCharacters(n, s);

	cout << result << endl;

	return 0;
}

