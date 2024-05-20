#include <iostream>
using namespace std;

int main()
{
    /* int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i = 3;
    cout << i[arr] << endl;

    int temp[10];
    int *ptr = &temp[10];
    cout << sizeof(temp) << endl;
    cout << sizeof(*ptr) << endl; */

    /* int a[20] = {1, 2, 3, 4, 5, 6};
    cout << a[0] << endl;
    cout << &a << endl;
    cout << a << endl;
    int *p = &a[0];
    cout << p << endl;
    cout << *p << endl;
    cout << &p << endl; */

    int arr[10];
    // arr=arr+1; //gives error
    int *ptr = &arr[0];
    cout << ptr << endl;
    ptr = ptr + 1;
    cout << ptr << endl;

    return 0;
}