// swapping alternate elements

#include <bits/stdc++.h>
using namespace std;

void swapFun(int arr[], int size)
{
    for (int i = 0; i < size-1; i += 2)
    {
        swap(arr[i], arr[i + 1]);
    }
}

int main()
{
    int arr1[6] = {1,2, 3, 4, 5, 6}, arr2[5] = {1, 2, 3, 4, 5};
    cout << endl
         << "the final result is : ";
    swapFun(arr1, 6);
    swapFun(arr2, 5);
    for (int i = 0; i < 6; i++)
    {
        cout << arr1[i] << " : ";
    }

    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << " : ";
    }
    return 0;
}