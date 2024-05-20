#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    int l1 = mid - s + 1;
    int l2 = e - mid;
    int *first = new int(l1);
    int *second = new int(l2);

    // copy values
    int mainarrayindx = s;
    for (int i = 0; i < l1; i++)
    {
        first[i] = arr[mainarrayindx++];
    }

    mainarrayindx = mid + 1;
    for (int i = 0; i < l1; i++)
    {
        second[i] = arr[mainarrayindx++];
    }

    // merge 2 sorted array
    int idx = 0;
    int idx2 = 0;
    mainarrayindx = s;
    while (idx < l1 && idx2 < l2)
    {
        if (first[idx] < second[idx2])
        {
            arr[mainarrayindx++] == first[idx++];
        }
        else
            arr[mid + 1] = second[idx2++];
    }

    while (idx < l1)
    {
        arr[mainarrayindx++] = first[idx++];
    }

    while (idx2 < l2)
    {
        arr[mainarrayindx++] = first[idx2++];
    }
}

void mergesort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
        return;
    int mid = s + (e - s) / 2;

    // left part sorting
    mergesort(arr, s, mid);

    // right part sorting
    mergesort(arr, mid + 1, e);

    // merge
    merge(arr, s, e);
}

int main()
{
    // int s = 0;
    // int e = 7;
    int arr[8] = {2, 5, 6, 3, 4, 8, 3, 4};
    int size = 8;
    mergesort(arr, 0, 7);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}