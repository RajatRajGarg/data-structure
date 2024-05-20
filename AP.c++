#include <iostream>
using namespace std;
int Ap(int n)
{
    int ap = 3 * n + 7;
    return ap;
}

int main()
{
    int n;
    cin >> n;
    int ans = Ap(n);
    cout << "the ap is:" << ans << endl;

    return 0;
}