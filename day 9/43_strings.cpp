// length of last word

#include <bits/stdc++.h>

using namespace std;

int lengthoflastword(string s)
{
    int j = s.length() - 1;
    if (s.empty())
    {
        return 0;
    }
    if (s.length() == 1)
    {
        return 1;
    }
    while (s[j] == ' ')
    {
        j--;
    }
    int i = j;
    if (j == 0)
    {
        return 1;
    }
    for (; s[i] != ' '; i--)
    {
        if (i == 0)
        {
            i--;
            break;
        }
    }
    return j - i;
}

int main()
{
    string s = "hello worlsad    ";
    cout << s.size();
    int l = lengthoflastword(s);
    cout << "The length of the last word is : " << l << endl;
    return 0;
}