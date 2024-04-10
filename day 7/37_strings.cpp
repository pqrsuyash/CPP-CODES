//pop duplicate
#include <bits/stdc++.h>

using namespace std;

string check(string s)
{
    stack<char> temp;
    int i = 0;
    while (true)
    {

        if (!temp.empty() && temp.top() == s[i])
        {
            temp.pop();
            i++;
        }
        else if (i < s.size())
        {
            temp.push(s[i]);
            i++;
        }
        else
        {
            break;
        }

        if (s[i] == '\0')
        {
            break;
        }
    }
    string result;
    int j = 0;
    while (!temp.empty())
    {
        result += temp.top();
        temp.pop();
    }
    reverse(result.begin(), result.end());
    return result;
}

int main()
{
    string s = "abbaca";
    cout << check(s);
    return 0;
}