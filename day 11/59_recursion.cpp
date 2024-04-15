//merge sort using recursion
#include<bits/stdc++.h>

using namespace std;


void merge(int *arr,int s,int e){
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;

    int *first=new int[len1];
    int *second=new int[len2];
    int mainIndex=0;
    int I1=0;
    int I2=0;
    for(int i=0;i<len1;i++)
    first[i]=arr[mainIndex++];
    for(int i=0;i)
}

void mergeSort(int *arr,int s int e){

    //base case
    if(s>=e)
    return ;
    int mid=s+(e-s)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,e);
}


int main()
{
    int arr[]={3,6,2,7,9,4,6};
    int s=0;
    int e=sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,s,e-1);

 return 0;
}