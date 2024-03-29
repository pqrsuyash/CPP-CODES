// bubble sort

#include <bits/stdc++.h>

using namespace std;

vector<int> bubbleSort(vector<int> arr)
{

    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = 0; j < arr.size()-i-1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    return arr;
}
int main()
{
    vector<int> arr = {5, 2, 3, 34, 34, 76, 23, 87, 7, 2};
    vector<int> ans = bubbleSort(arr);
    cout << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}