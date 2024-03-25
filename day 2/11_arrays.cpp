// sorting 0s and 1s
#include <bits/stdc++.h>

using namespace std;

vector<int> swapping(vector<int> arr, int size)
{
    vector<int> answer;
    for (int i = 0, j = size - 1; i < j;)
    {
        if (arr[i] == 0)
        {
            i++;
        }
        if (arr[j] == 1)
        {
            j--;
        }
        if (arr[i] == 1 && arr[j] == 0)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return arr;
}
int main()
{
    vector<int> arr = {0, 1, 0, 0, 1, 0, 1, 1, 0};
    vector<int> ans = swapping(arr, 9);
    cout << endl;
    for (int i = 0; i < 9; i++)
    {
        cout << ans[i]<<" ";
    }
    return 0;
}