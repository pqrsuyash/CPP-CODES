// row wise sum
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[3][3];
    vector<int> sum;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "enter element no. [" << i << "][" << j << "] :";
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        int count = 0;
        for (int j = 0; j < 3; j++)
        {
            count = count + arr[i][j];
        }
        sum.push_back(count);
    }

    for (int i = 0; i < 3; i++)
    {
        cout << "sum of row " << i << " is : " << sum[i] << endl;
    }
    return 0;
}