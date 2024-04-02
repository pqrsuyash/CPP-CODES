// reverse words of a string

#include <bits/stdc++.h>

using namespace std;

string reverse(string s)
{
    int i = 0;
    int start = 0;
   for(int i=0;i<s.length()+1;i++)
    {
        if (s[i] == ' ' || s[i] == '\0')
        {
            for (int j = start, k = i - 1; j < k; j++, k--)
            {
                swap(s[j], s[k]);
            }
            start = i + 1;
        }
    }
    return s;
}

int main()
{
    string s;
    s ="my name is suyash";
    string reversed = reverse(s);
    cout << reversed<<endl;
    for(int i=0;i<s.length();i++){
        cout<<s[i];
    }
    return 0;
}