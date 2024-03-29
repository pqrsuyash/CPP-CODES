// selection sort
//for small size of array
#include <bits/stdc++.h>

using namespace std;

vector<int> selectionSort(vector<int> array)
{
    for (int i = 0; i < array.size() - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < array.size(); j++)
        {
            if (array[minIndex] > array[j])
            {
                minIndex = j;
            }
            swap(array[minIndex], array[i]);
        }
    }
    return array;
}
int main()
{
    vector<int> arr = {5, 2, 3, 34, 34, 76, 23, 87, 7, 2};
    vector<int> ans = selectionSort(arr);
    cout << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}