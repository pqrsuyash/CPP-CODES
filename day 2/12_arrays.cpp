// binary search
#include <bits/stdc++.h>

using namespace std;
void binary_search(int arr[], int size, int key)
{
    int low = 0;
    int high = size - 1;
    cout << endl;
    while (low <= high)
    {
        int mid = ((low + high) / 2);
        if (key > arr[mid])
        {
            low = mid;
        }
        else if (key < arr[mid])
        {
            high = mid;
        }
        else if (key == arr[mid])
        {
            cout << "found the element at " << mid + 1 << "th index" << endl;
            break;
        }
        else
        {
            cout << "element not found" << endl;
            break;
        }
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 6, 20, 35, 94, 102};
    binary_search(arr, 6, 6);
    return 0;
}