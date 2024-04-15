// bubble sort using recursion
#include <bits/stdc++.h>

using namespace std;

void bubbleSort(int arr[], int size)
{
    if (size == 0 || size == 1)
        return;

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr [i + 1])
            swap(arr[i], arr[i + 1]);
    }
    bubbleSort(arr, size - 1);
}

void print(int arr[],int size)
{
    for (int i = 0; i < size; i++)
        cout << " " << arr[i];
}

int main()
{
    int arr[] = {6, 34, 76, 45, 76};
    int size=sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, size);
    print(arr,size);
    return 0;
}