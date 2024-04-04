//returning spiral matrix 
#include <bits/stdc++.h>

using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();
    int ele = row * col;
    int startingrow = 0;
    int startingcol = 0;
    int endingrow = row - 1;
    int endingcol = col - 1;

    int count = 0;
    while (count < ele)
    {
        for (int i = startingcol; count < ele && i <= endingcol; i++)
        {
            ans.push_back(matrix[startingrow][i]);
            count++;
        }
        startingrow++;
        for (int i = startingrow; count < ele && i <= endingrow; i++)
        {
            ans.push_back(matrix[i][endingcol]);
            count++;
        }
        endingcol--;
        for (int i = endingcol; count < ele && i >= startingcol; i--)
        {
            ans.push_back(matrix[endingrow][i]);
            count++;
        }
        endingrow--;
        for (int i = endingrow; count < ele && i >= startingrow; i--)
        {
            ans.push_back(matrix[i][startingcol]);
            count++;
        }
        startingcol++;
    }
    return ans;
}

int main()
{
    vector<vector<int>> arr;
    arr = {{1, 2, 3}, {8, 9, 4}, {7, 6, 5}};
    vector<int> ans;
    ans = spiralOrder(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}