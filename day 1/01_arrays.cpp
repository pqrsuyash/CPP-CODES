//finding minimum and maximum element

#include <bits/stdc++.h>

using namespace std;

void scan(int arr[], int n)
{
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "enter the element number " << i << " : ";
        cin >> arr[i];
    }
}
int main()
{
    int array[5];
    scan(array, 5);
    int max = 0, min = array[0];
    for (int i = 0; i < 5; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    cout << endl
         << "the maximum value is " << max << endl;
    cout << "the minimum value is " << min << endl;
    return 0;
}
