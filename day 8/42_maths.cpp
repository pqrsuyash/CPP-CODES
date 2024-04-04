// gcd

#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else if (b > a)
        {
            b = b - a;
        }
    }
    return a;
}

int main()
{
    cout << "enter two numbers to find gcd of : ";
    int a, b;
    cin >> a >> b;
    int ans = gcd(a, b);
    cout << "the gcd of " << a << " and " << b << " is : " << ans;
    return 0;
}