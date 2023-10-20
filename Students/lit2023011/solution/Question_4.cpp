#include <iostream>
using namespace std;

int main()
{
    int length, max[3] = {-1, -1, -1};
    cout << "Enter the length of array:" << endl;
    cin >> length;
    int *arr = new int[length];
    cout << "Enter each number of the array" << endl;

    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
        if (max[0] != arr[i] && max[1] != arr[i] && max[2] != arr[i])
        {
            if (max[0] < arr[i])
            {
                max[2] = max[1];
                max[1] = max[0];
                max[0] = arr[i];
            }
            else if (max[1] < arr[i])
            {
                max[2] = max[1];
                max[1] = arr[i];
            }
            else if (max[2] < arr[i])
            {
                max[2] = arr[i];
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

    delete[] arr;

    return 0;
}
