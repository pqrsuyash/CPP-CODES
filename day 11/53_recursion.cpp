// linear search using loops

#include <bits/stdc++.h>

using namespace std;

bool linearSearch(int arr[], int size, int key)
{
    if (size == 0)
        return 0;
    if (key == arr[0])
        return 1;

    linearSearch(arr + 1, size - 1, key);
}
int main()
{
    int arr[] = {1, 3, 6, 7, 14};
    if (linearSearch(arr, sizeof(arr) / sizeof(arr[0]), 6))
        cout << " Found " << endl;
    else
        cout << " Not Found " << endl;
    return 0;
}