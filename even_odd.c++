#include <iostream>
using namespace std;

bool iseven(int a)
{
    if (a & 1)
        return 0;
    return 1;
}

int main()
{
    int num;
    cout << "enter the number:";
    cin >> num;
    if (iseven(num))
    {
        cout << "the number is even.";
    }
    else
        cout << "the number is odd.";

    return 0;
}