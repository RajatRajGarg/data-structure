#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "enter a and b:";
    cin >> a >> b;
    char op;
    cout << "enter operator:";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << (a + b) << endl;
        break;

    case '-':
        cout << (a - b) << endl;
        break;

    case '*':
        cout << (a * b) << endl;
        break;

    case '/':
        cout << (a / b) << endl;
        break;

    case '%':
        cout << (a % b) << endl;
        break;

    default:
        cout << "enter valid opeartor";
        break;
    }

    return 0;
}