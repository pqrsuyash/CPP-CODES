// string compression

#include <bits/stdc++.h>

using namespace std;

int compress(vector<char> &chars)
{
    int i = 0;
    int ansIndex = 0;
    int n = chars.size();
    while (i < n)
    {
        int j = i + 1;
        while (j < n && chars[i] == chars[j])
        {
            j++;
        }
        chars[ansIndex++] = chars[i];
        int count = j - i;
        string cts = to_string(count);
        if (count > 1)
        {
            for (auto ch : cts)
            {
                chars[ansIndex++] = ch;
            }
        }
        i = j;
    }
    return ansIndex;
}

int main()
{
    vector<char> s;
    s = {'a', 'a', 'a', 'b', 'c', 'c', 'd', 'd', 'd', 'd'};
    int ans = compress(s);
    cout << endl;
    for (int i = 0; i < ans; i++)
    {
        cout << s[i] << " ";
    }
    cout << endl;
    cout << "length of string will be " << compress(s);
    return 0;
}