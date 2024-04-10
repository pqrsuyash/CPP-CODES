//balancing the sum
#include <bits/stdc++.h>

using namespace std;
int pivotIndex(vector<int> &nums)
{
    long long sum = 0;
    long long leftSum = 0;

    for (int num : nums)
    {
        sum += num;
    }

    for (int i = 0; i < nums.size(); i++)
    {
        sum -= nums[i];
        if (leftSum == sum)
        {
            return i;
        }
        leftSum += nums[i];
    }

    return -1;
}

int main()
{
    vector<int> arr = {2, 1, -1};
    int ans = pivotIndex(arr);
    cout << endl
         << ans << endl;

    return 0;
}