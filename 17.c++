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
        char count = 'A';
        while (j <= i)
        {
            cout << count;
            count += 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}