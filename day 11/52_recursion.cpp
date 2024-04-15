// give sum of arrays as output

#include <bits/stdc++.h>

using namespace std;

int sum(int arr[], int size)
{
    if (size == 0)
        return 0;
    if (size == 1)
        return arr[0];

    int ans = arr[0] + sum(arr + 1, size - 1);

    return ans;
}

int main()
{
    int arr[] = {23, 45, 34, 23};
    int ans = sum(arr, sizeof(arr) / sizeof(arr[0]));
    cout << " the total sum is : " << ans << endl;
    return 0;
}