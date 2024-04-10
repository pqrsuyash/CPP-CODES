// find the length of the longest substring without repeating characters.
#include <bits/stdc++.h>

using namespace std;
int noRepeat(string s)
{
    int ans = 1;
    if(s.empty()){
        return 0;
    }
    for (int i = 1; i < s.size(); i++)
    {
        char temp = s[i];
        for (int j = i - 1; j >= 0; j--)
        {
            if (temp == s[j])
            {
                ans = max(ans, i - j);
                break;
            }
        }
    }
    return ans;
}

int main()
{
    string s = "pwwfygyugyfvuygkew";
    int ans = noRepeat(s);
    cout << endl
         << ans << endl;
    return 0;
}