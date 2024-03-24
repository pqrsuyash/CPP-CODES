// finding intersection of two arrays

#include <bits/stdc++.h>

using namespace std;
vector<int> intersect(vector<int> arr1, int size1, vector<int> arr2, int size2)
{
    int i = 0;
    int j = 0;
    vector<int> ans;
    while (i < size1 && j < size2)
    {
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr1 = {1, 2, 2, 2, 3, 4}, arr2 = {2, 2, 3};
    vector<int> ans = intersect(arr1, 6, arr2, 3);
    cout << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " : ";
    }
    return 0;
}