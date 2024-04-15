// set matrix to zero

#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<int>> arr;
    arr = {{0},{1}};
    int row = arr.size();
    int col = arr[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == 0)
            {
                for (int k = 0; k < row; k++)
                {
                    for (int l = 0; l < col; l++)
                    {
                        arr[i][l] = -1;
                        arr[k][j] = -1;
                    }
                }
            }
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(arr[i][j]==-1)
            arr[i][j]=0;
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}