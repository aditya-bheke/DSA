#include<iostream>
#include<vector>
using namespace std;
int Binary_search(vector<int> arr,int target,int start,int end){
    int mid=start+(end-start)/2;
    if(start<=end){
        if(target>arr[mid]){
            return Binary_search(arr,target,mid+1,end);
        }else if(target<arr[mid]){
            return Binary_search(arr,target,start,mid-1);
        }else{
            return mid;
        }
    }return -1;
}

int main()
{
    vector<int> arr={1,2,3,4,5};
    int target=4;
    int start=0;
    int end=arr.size()-1;
    cout<<Binary_search(arr,target,start,end)<<endl;
    return 0;
}