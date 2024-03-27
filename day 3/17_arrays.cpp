// binary searching in a rotated sorted array
#include <bits/stdc++.h>

using namespace std;

int pivot(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] < arr[mid + 1] && arr[mid] < arr[mid - 1])
        {
            return mid;
        }
        else if (arr[mid] < arr[mid + 1] && arr[mid] > arr[mid - 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
            return mid;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int binarySearch(vector<int> arr, int s, int e, int target)
{
    int start = s;
    int end = e;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {7, 9, 24, 43, 67, 89, 4, 6};
    int piv_ele = pivot(arr);
    int target = 4;
    int ans = -1;
    if (target > arr[arr.size() - 1])
    {
        ans = binarySearch(arr, 0, piv_ele, 4);
    }
    else if (target < arr[arr.size() - 1])
    {
        ans = binarySearch(arr, piv_ele, arr.size() - 1, 4);
    }

    cout << endl
         << ans << endl;
    return 0;
}
