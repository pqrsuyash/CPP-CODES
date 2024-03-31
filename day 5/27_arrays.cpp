// rotating array with k index

#include <bits/stdc++.h>

using namespace std;

vector<int> rotate(vector<int> &nums, int k)
{
    vector<int> temp(nums.size());
    for (int i = 0; i < nums.size(); i++)
    {
        temp[(i + k) % nums.size()] = nums[i];
    }
    nums = temp;
    return nums;
}

int main()
{
    vector<int> nums = {3,4,1,2};
    rotate(nums, 2);
    cout << endl;
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << "  ";
    }
    cout << endl;

    return 0;
}