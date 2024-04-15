// exponenting a over b

#include <bits/stdc++.h>

using namespace std;

int power(int a, int b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a;

    return a * power(a, b);
}

int main()
{
    int a, b;
    cout << "enter number : ";
    cin >> a;
    cout << "enter power : ";
    cin >> b;
    cout << "a raise to b is : " << power(a, b) << endl;
    return 0;
}