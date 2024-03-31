//practice stl
#include<bits/stdc++.h>

using namespace std;

int main()
{
vector<int> arr={1,2,3};
cout<<endl;
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<endl;
}
arr.pop_back();
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<endl;
}
 return 0;
}