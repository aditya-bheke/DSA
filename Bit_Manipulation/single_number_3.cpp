#include<bits/stdc++.h>
using namespace std;
vector<int>singnum(vector<int> nums){
    int n=nums.size();
    int xorr=0;
    for(int i=0;i<n;i++){
        xorr^=nums[i];
    }
    int rightmost_bit_set_position_value=(xorr & (xorr-1)) ^ xorr;
    int b1=0;
    int b2=0;
    for(int i=0;i<n;i++){//each bucket will contain only 1 distict number and rest all are pairs
        if(nums[i] & rightmost_bit_set_position_value){//if nums[i]=4 and rightmost =2 
            b1^=nums[i];//then 100 & 010 is 0 so it will go in b2
        }else{
            b2^=nums[i];//doing xors of numsbers will give distinct element
        }
    }
    return {b1,b2};
}
int main(){
    int n;
    cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        nums.push_back(num);
    }
    vector<int>result=singnum(nums);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}