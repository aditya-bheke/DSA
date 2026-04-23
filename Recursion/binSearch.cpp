#include<bits/stdc++.h>
using namespace std;

int binSearch(vector<int>nums,int st,int end,int target){
    if(st>end){
        return -1;
    }
    int mid = st+(end-st)/2;
    if(nums[mid]==target){
        return mid;
    }
    else if(nums[mid]>target){
        return binSearch(nums,st,mid-1,target);
    }else{
        return binSearch(nums,mid+1,end,target);
    }
}

int main(){
    vector<int>nums={1,3,5,6,9};
    int n = nums.size();
    cout<<binSearch(nums,0,n-1,6);
    return 0;
}