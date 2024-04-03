// permutation in string is present or not

#include <bits/stdc++.h>

using namespace std;
bool isPresent(int count1[], int count2[])
{
    for (int i = 0; i < 26; i++)
    {
        if (count1[i] != count2[i])
        {
            return 0;
        }
    }
    return 1;
}

bool present(string s1, string s2)
{
    int count1[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        count1[s1[i] - 'a']++;
    }
    int count2[26] = {0};
    int i = 0;
    int window = s1.length();
    while (i < window && i < s2.length())
    {
        count2[s2[i] - 'a']++;
        i++;
    }
    if (isPresent(count1, count2))
    {
        return 1;
    }
    while (i < s2.length())
    {
        char newChar = s2[i];
        count2[newChar - 'a']++;

        char oldChar = s2[i - window];
        count2[oldChar - 'a']--;
        i++;

        if (isPresent(count1, count2))
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    string s1 = "ab", s2 = "bbdskibdja";
    if (present(s1, s2))
    {
        cout << "permutation of string 1 is present in s2." << endl;
    }
    else
    {
        cout << "not present." << endl;
    }
    return 0;
}