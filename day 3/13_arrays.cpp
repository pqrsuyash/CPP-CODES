// finding moutain peak problem
#include <bits/stdc++.h>

using namespace std;

int peakIndexInMountainArray(vector<int> arr)
{
    int s = 0;
    int e = arr.size();
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if (arr[mid] < arr[mid + 1])
        {
            s = mid;
        }
        else if (arr[mid] < arr[mid - 1])
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int main()
{
    vector<int> arr = {1, 3, 6, 9, 34, 19, 14};
    int answer = peakIndexInMountainArray(arr);
    cout << endl
         << "the index of the peak element is : " << answer << endl;
    return 0;
}
