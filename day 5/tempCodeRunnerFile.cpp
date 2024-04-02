// practice strings
#include <bits/stdc++.h>

using namespace std;

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
    return 0;
}