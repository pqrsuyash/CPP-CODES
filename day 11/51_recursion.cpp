// finding if array is sorted or not
#include <bits/stdc++.h>

using namespace std;

bool isSorted(int arr[], int size)
{
    if (size == 0 || size == 1)
    {
        return 1;
    }

    if (arr[0] > arr[1])
        return 0;
    else
        isSorted(arr + 1, size - 1);
}

int main()
{
    int arr[] = {2, 3, 5, 7, 9, 2, 45};


    if (isSorted(arr, sizeof(arr)/sizeof(arr[0]) ))
        cout << "array is sorted";
    else
        cout << "array is not sorted";

    return 0;
}