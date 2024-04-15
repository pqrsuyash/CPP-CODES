#include <bits/stdc++.h>

using namespace std;

int fib(int n,int s)
{

    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    int ans =  + fib(n - 1,s+1);
    return ans;
}
int main()
{
    int n,s=0;
    cout << "enter value";
    int ans = fib(n,s);
    cout << "the number is : " << ans << endl;
    return 0;
}