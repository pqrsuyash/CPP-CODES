// maximum occuring character

#include <bits/stdc++.h>

using namespace std;

char maxOccuring(string s)
{
    int a[26] = {0}, max = -1;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch >= 'a' && ch <= 'z')
        {
            a[ch - 'a']++;
        }
        else
        {
            a[ch - 'A']++;
        }
    }
    int ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (a[i] > max)
        {
            ans = i;
            max = a[i];
        }
    }
    return ans + 'a';
}
int main()
{
    string s;
    cout << "enter the string : ";
    cin >> s;
    cout << "the maximum occuring character in the string was " << maxOccuring(s) << endl;
    return 0;
}