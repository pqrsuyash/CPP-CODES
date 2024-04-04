// binary search for matrix

#include <bits/stdc++.h>

using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int start = 0;
    int col = matrix[0].size();
    int end = matrix.size() * matrix[0].size() - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (matrix[mid / col][mid % col] == target)
        {
            return 1;
        }
        else if (matrix[mid / col][mid % col] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return 0;
}

int main()
{
    vector<vector<int>> matrix;
    matrix = {{1, 2, 3}, {5, 6, 7}, {12, 23, 54}};
    int ans = searchMatrix(matrix, 5);
    if (ans == 1)
    {
        cout << "element found." << endl;
    }
    else
        cout << "element not found." << endl;
    return 0;
}