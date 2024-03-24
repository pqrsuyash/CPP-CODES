//sum of all elements in an array

#include<bits/stdc++.h>

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
    int arr[15], size, sum = 0;
    cout << "enter the size of the array : ";
    cin >> size;
    scan(arr, size);
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << "the sum is : " << sum << endl;
    return 0;
}
