//linear search

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
    int arr[20], size, key, flag = 1, pos;
    cout << "enter the size of array : ";
    cin >> size;
    scan(arr, size);
    cout << "enter the key element : ";
    cin >> key;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            pos = i;
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "element fount at position : " << pos + 1 << endl;
    }
    else
    {
        cout << "element not found." << endl;
    }
    return 0;
}