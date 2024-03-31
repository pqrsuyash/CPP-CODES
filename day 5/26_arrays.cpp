// reverse array after m
#include <bits/stdc++.h>

using namespace std;

int reverseArray(vector<int> &arr, int m)
{
    int s = m + 1;
    int e = arr.size() - 1;
    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}
int main()
{
    vector<int> arr = {1, 2, 4, 3};
    reverseArray(arr, 1);
    cout << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
