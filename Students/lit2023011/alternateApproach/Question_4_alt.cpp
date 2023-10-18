#include <iostream>
using namespace std;

int main()
{
    int length, max[3] = {-1, -1, -1},num;
    cout << "Enter the length of array:" << endl;
    cin >> length;
    cout << "Enter each number of the array" << endl;

    while (length--)
    {
        cin >> num;
        if (max[0] != num && max[1] != num && max[2] != num)
        {
            if (max[0] < num)
            {
                max[2] = max[1];
                max[1] = max[0];
                max[0] = num;
            }
            else if (max[1] < num)
            {
                max[2] = max[1];
                max[1] = num;
            }
            else if (max[2] < num)
            {
                max[2] = num;
            }
        }
    }
    if (max[2] == -1)
    {
        cout << max[0];
    }
    else
    {
        cout << max[2];
    }

    return 0;
}
