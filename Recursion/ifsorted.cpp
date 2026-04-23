#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>nums, int n){
    if(n==1){
        return true;
    }
    if(nums[n-1]>=nums[n-2]){
        return isSorted(nums,n-1);
    }else{
        return false;
    }
}

int main(){
    vector<int>nums={1,2,4,5,6};
    int n = nums.size();
    if(isSorted(nums,n)){
        cout<<"Sorted"<<endl;
    }else{
        cout<<"Not Sorted"<<endl;
    }
    return 0;
}