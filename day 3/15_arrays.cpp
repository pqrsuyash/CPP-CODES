// finding pivot elements

#include <bits/stdc++.h>

using namespace std;

int pivot(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int ans;
    while (start < end)
    {
        if (arr[mid] < arr[mid + 1] && arr[mid] < arr[mid - 1])
        {
            ans = mid;
            return mid;
        }
        else if (arr[mid] < arr[mid + 1] && arr[mid] > arr[mid - 1])
        {
            start = mid + 1;
        }
        else
        {
            ans = mid + 1;
            return mid;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    vector<int> arr = {7, 8, 9, 10, 16, 1, 2, 3};
    int ans = pivot(arr);
    cout << endl
         << "the pivot element is at index : " << ans << endl;
    return 0;
}