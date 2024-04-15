// binary search using recursion

#include <bits/stdc++.h>

using namespace std;

bool binarySearch(int arr[], int size, int key, int start, int end)
{
    int mid = start + (end - start) / 2;
    if (start>end)
        return false;
    if (key == arr[mid])
        return true;
    if (key > arr[mid])
        binarySearch(arr, size/2, key, mid+1, end);
    else
        binarySearch(arr, size / 2, key, start, mid-1);
}

int main()
{
    int arr[] = {1, 3, 6, 7, 14};
    int size = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    if (binarySearch(arr, sizeof(arr) / sizeof(arr[0]), 3, start, end))
        cout << " Found " << endl;
    else
        cout << " Not Found " << endl;
    return 0;
}