// merge two sorted arrays

#include <bits/stdc++.h>

using namespace std;

vector<int> merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    for (int i = m, j = 0; i < m + n; i++, j++)
    {
        nums1[i] = nums2[j];
    }
    sort(nums1.begin(), nums1.end());
    return nums1;
}

int main()
{
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    merge(nums1, 3, nums2, 3);
    for (int i = 0; i < 6; i++)
    {
        cout << nums1[i];
    }
    return 0;
}