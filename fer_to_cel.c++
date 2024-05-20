#include <iostream>
using namespace std;

int main()
{
    float fer;
    cout << "enter fahrenheit :";
    cin >> fer;

    double cel = (fer - 32.0) * 5.0 / 9.0;

    cout << cel;
}