// recursion for factorial

#include <bits/stdc++.h>

using namespace std;

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int main()
{
    int num = 0;
    cout << "enter number to find factorial : ";
    cin >> num;
    int ans = factorial(num);
    cout << "the factorial is : " << ans << endl;
    return 0;
}
