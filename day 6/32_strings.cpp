// check palindrome

#include <bits/stdc++.h>

using namespace std;
int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != 0; i++)
    {

        count++;
    }
    return count;
}
char toLower(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {

        char temp = ch - 'A' + 'a';
        return temp;
    }
    else
    {
        return ch;
    }
}
int main()
{
    char s[20];
    cout << "enter to test : ";
    cin >> s;
    int c = getLength(s);
    int flag = 0;
    int start = 0;
    int end = c - 1;
    while (start <= end)
    {
        if (toLower(s[start]) == toLower(s[end]))
        {
            start++;
            end--;
        }
        else
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "it is not a palindrome.";
    }
    else
        cout << "it is a palindrome.";

    return 0;
}