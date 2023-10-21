#include <bits/stdc++.h>
using namespace std;

int countPairedCharacters(int n, string s)  
{
	int arr[256]={0};
	int c = 0;
	int cnt=0;
	for (int i = 0; i < 2*n; i=i+2)       
	{   
		if (arr[s[i]]==0){
			cnt=cnt+1;
		}
        arr[s[i]]++; 		
					
	}

    for (int i=65;i<126; i++) {
        if (arr[i]>=1 && arr[i+32]>=1){
            c=c+1;
        }
    } 
	return c;
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

