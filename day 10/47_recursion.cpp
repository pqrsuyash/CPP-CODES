// finding power
#include <bits/stdc++.h>

using namespace std;

int calc(int num, int p)
{
    if (p == 0)
        return 1;
    int ans = num * calc(num, p - 1);
    return ans;
}

int main()
{
    int num=0, p=0;
    cout<<endl;
    cout << "enter number : ";
    cin >> num;
    cout << "enter power : ";
    cin >> p;
    int ans = calc(num, p);
    cout << ans;
    return 0;
}