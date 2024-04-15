// check palindrome using recursion

#include <bits/stdc++.h>

using namespace std;

bool check(string str, int s, int e)
{

    if (s > e)
        return 1;

    if (str[s] != str[e])
        return 0;
    else
        return 1;

    return check(str, s++, e--);
}

int main()
{
    string str = "apllpapllpa";
    int s = 0, e = str.length() - 1;
    bool isit=check(str, s, e);
    if (isit)
        cout << "palindrome";
    else
        cout << "non palindrome";

    return 0;
}