#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        int count = 0;
        while (j <= n)
        {
            count = n - j + 1;
            cout << count;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}