// reverse a string
#include <bits/stdc++.h>

using namespace std;
void reverse(char name[], int n)
{
    for (int i = 0, j = n - 1; i < n; i++, j--)
    {
        swap(name[i], name[j]);
    }
    cout << "the reversed string is : " << name << endl;
}

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != 0; i++)
    {

        count++;
    }
    return count;
}
int main()
{
    int count;
    char name[20];
    cout << endl;
    cout << "enter your name : ";
    cin >> name;
    count = getLength(name);
    cout << endl
         << "your name is " << name << " which has " << count << " characters." << endl;
    reverse(name, count);
    return 0;
}