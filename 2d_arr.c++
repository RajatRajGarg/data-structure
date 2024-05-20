#include <iostream>
using namespace std;

// for searching from the 2d array
bool ispresent(int arr[][3], int target, int i, int j)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == target)
                return 1;
        }
    }

    return 0;
}

int main()
{
    int target = 5;
    int arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }

    if (ispresent(arr, target, 3, 3))
        cout << "element found" << endl;
    else
        cout << "element not found" << endl;

    return 0;
}