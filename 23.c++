#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    int col = 1;
    while (row <= n)
    {
        int space = row + col - 2;
        while (space)
        {
            cout << " *";
            space = space - 1;
        }

        int col = 1;
        int val = row;
        while (col <= n)
        {
            cout << row;
            // val += 1;
            col = col + 1;
        }

        /*int start = row - 1;
        while (start)
        {
            cout << start;
            start = start - 1;
        }*/

        cout << endl;
        row = row + 1;
    }
}