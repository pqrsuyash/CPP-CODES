// insertion sort
#include <bits/stdc++.h>

using namespace std;

vector<int> insertionSort(vector<int> arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        int temp = arr[i];
        int k = i;

        for (int j = i - 1; j >= 0; j--)
        {

            if (temp < arr[j])
            {
                k = j;
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[k] = temp;
    }
    return arr;
}
int main()
{

    vector<int> arr = {5, 2, 3, 34, 34, 76, 23, 87, 7, 2};
    vector<int> ans = insertionSort(arr);
    cout << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}