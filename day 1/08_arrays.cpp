// finding duplicates in an array.
#include <bits/stdc++.h>

using namespace std;

int findduplicate(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    for (int i = 1; i < size; i++)
    {
        ans = ans ^ i;
    }
    return ans;
}
int main()
{
    int arr[] = {1, 2, 3, 6, 4, 7, 6, 5};
    int ans = findduplicate(arr, 8);
    cout << endl
         << "the duplicated element : " << ans << endl;
    return 0;
}