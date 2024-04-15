// recursion printing

#include <bits/stdc++.h>

using namespace std;

int recPrint(int n)
{
    if (n == 0)
        return 1;

    cout << n;
    recPrint(n - 1);

    return 0;
}

int main()
{
    int n;
    cout << "enter number : ";
    cin >> n;
    recPrint(n);

    return 0;
}