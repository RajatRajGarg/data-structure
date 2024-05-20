#include <iostream>
using namespace std;

void update2(int &i)
{
    i++;
}

void update(int i)
{
    i++;
}

int main()
{
    int i = 5;
    /* int &j = i;
    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;
    cout << j << endl; */

    /* cout << "before" << i << endl;
    update(i);
    cout << "after" << i << endl; */

    cout << "before" << i << endl;
    update2(i);
    cout << "after" << i << endl;

    return 0;
}