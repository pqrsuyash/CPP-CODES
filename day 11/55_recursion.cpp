// reversing string using recursion

#include <bits/stdc++.h>

using namespace std;

string reverse(string str, int s, int e)
{
    if (s >= e)
        return str;

    swap(str[s], str[e]);

    return reverse(str, s+1, e-1);
}

int main()
{
    string str = "fedcba";
    int s = 0;
    int e = str.length() - 1;
    //  cout << str.length() << endl;
    cout << endl
         << reverse(str, s, e) << endl;
    return 0;
}