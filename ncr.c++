#include <iostream>
using namespace std;

int fact(int n)
{
    int facto = 1;
    for (int i = 1; i <= n; i++)
    {
        facto = facto * i;
    }
    return facto;
}

int ncr(int n, int r)
{
    int num = fact(n);
    int denom = fact(r) * fact(n - r);
    return num / denom;
}

int main()
{
    int n, r;
    cout << "enter n and r:";
    cin >> n >> r;
    cout << "answer is :" << ncr(n, r) << endl;
}