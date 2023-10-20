#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str,int right) {

int i;
for(i=0;i<=right/2;i++){
    if(str[i] != str[right -i])
    return false;

}
return true;
}

int main() {
  string str;
  cout << "Enter a string: ";
  cin >> str;

  if (isPalindrome(str, str.length() - 1)) {
    cout << " Palindrome." << endl;
  } else {
    cout << " Not a Palindrome." << endl;
  }

  return 0;
}