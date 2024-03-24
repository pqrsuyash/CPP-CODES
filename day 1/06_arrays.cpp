// finding unique numbers in an array
#include <bits/stdc++.h>

using namespace std;
int findunique(int arr[],int size){
int ans=0;
for(int i=0;i<size;i++){
ans=ans^arr[i];
}
return ans;
}

int main()
{
    int arr[] = {1,1,2,3,4};
   int answer=findunique(arr,5);
   cout<<endl<<"the unique element is :  "<<answer<<endl;
    return 0;
}