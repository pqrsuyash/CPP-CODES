// valid palindrome
#include <bits/stdc++.h>

using namespace std;

bool valid(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ||
        (ch >= '0' && ch <= '9'))
        return 1;
    else
        return 0;
}
char toLower(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
        return ch;
    else
        return ch - 'A' + 'a';
}

bool isPalindrome(string s)
{
    string temp = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (valid(s[i]))
            temp.push_back(toLower(s[i]));
    }

    int start = 0;
    int end = temp.size() - 1;
    while (start <= end)
    {
        if (temp[start] == temp[end])
        {
            start++;
            end--;
        }
        else
            return 0;
    }
    return 1;
}

int main()
{
    string s;
    cout << "enter string to test : ";
    cin >> s;
    if (isPalindrome(s))
        cout << "it is a palindrome.";
    else
        cout << "not a palindrome.";

    return 0;
}