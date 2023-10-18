#include <bits/stdc++.h>
using namespace std;

void registerUsernames(int n)
{
    map<string, int> database;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if (database.count(s) == 0)
        {
            cout << "OK" << endl;
            database[s] = 1;
        }
        else
        {
            while (true)
            {
                string newUsername = s + to_string(database[s]);
                if (database.count(s) == 0)
                {
                    database.count(newUsername);
                    cout<< newUsername << endl;
                    database[newUsername] = 1;
                    break;
                }
                database[s]++;
            }
        }
    }
}

int main()
{
    int n;
    cout << "Enter the number of username registration attempts: ";
    cin >> n;
    registerUsernames(n);
    return 0;
}

// There are few Logical errors in the code. Fix them and submit the code.