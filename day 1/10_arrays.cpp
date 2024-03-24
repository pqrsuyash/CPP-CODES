//find pair sum

#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> pairsum(vector<int> &arr,int size,int sum){
    vector<vector<int>> ans;
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            if(arr[i]+arr[j]==sum){
vector<int> temp;
temp.push_back(min(arr[i],arr[j]));
temp.push_back(max(arr[i],arr[j]));
ans.push_back(temp);
            }
        }
    }
    return ans;
}
int main()
{
vector<int> array={1,2,3,4,5,6,7};
int sum=6;
vector<vector<int>> answer=pairsum(array,7,sum);
cout<<endl;
for(int i=0;i<answer.size();i++){
     cout << "(" << answer[i][0] << ", " << answer[i][1] << ") "<<endl;
}
 return 0;
}