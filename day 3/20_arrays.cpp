// add numbers to arrays using poistions respectively
#include <bits/stdc++.h>

using namespace std;

vector<int> addToArrayForm(vector<int> &num, int k)
{
    vector<int> answer;
    int carry = k;
    for (int i = num.size() - 1; i >= 0 || carry > 0; i--)
    {
        if (i >= 0)
        {
            carry = carry + num[i];
        }
        answer.push_back(carry % 10);
        carry /= 10;
    }

    reverse(answer.begin(), answer.end());

    return answer;
}
int main()
{
    vector<int> arr = {1, 2, 0, 0}, ans;
    ans = addToArrayForm(arr, 24);
    cout << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }
    cout << endl;

    return 0;
}
