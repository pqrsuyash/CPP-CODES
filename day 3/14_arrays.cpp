// find first and last occurrence of a given number
#include <bits/stdc++.h>

using namespace std;

int firstOcc(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size();
    int ans, mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            end = mid - 1;
            ans = mid;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOcc(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size();
    int ans2, mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            start = mid + 1;
            ans2 = mid;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans2;
}
int main()
{
    vector<int> arr = {1, 2, 4, 4, 7, 7, 7, 7, 7, 7, 7, 8, 9, 11, 16};
    int ans = firstOcc(arr, 7);
    int ans2 = lastOcc(arr, 7);
    cout << endl
         << "the first occurence of 7 is " << ans << endl;
    cout
        << "the last occurence of 7 is " << ans2 << endl;
    return 0;
}