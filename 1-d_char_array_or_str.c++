#include <iostream>
using namespace std;

int getlegth(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    // return 0;
}

int main()
{
    char name[20];
    cin >> name;
    cout << name << endl;
    cout << getlegth(name) << endl;
    return 0;
}