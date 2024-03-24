// reversing an array

#include <bits/stdc++.h>

using namespace std;

void scan(int arr[], int size)
{
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "enter the element number " << i + 1 << " : ";
        cin >> arr[i];
    }
}
int main()
{
    int arr[20], size, mid;
    cout << "enter the size of array : ";
    cin >> size;
    scan(arr, size);
    mid = size / 2;
    for (int i = 0; i < mid; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
    cout << "the reversed array is : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
    return 0;
}