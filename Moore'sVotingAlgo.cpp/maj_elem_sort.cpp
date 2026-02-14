#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maj_elem(vector<int> nums){
    sort(nums.begin(),nums.end());//for sorting TC=O(nlogn)//sort so that we get all the elements in ascending order and we can use this approach
    int size=nums.size();
    int freq=0;//if we keep freq 1 then we will also include the current elemnt so the freq for maj elemnt will always be grater than size/2 orelse for 0 t will be >=.
    int majority=nums[0];
    for(int i=1;i<size;i++){//TC=O(n)//we start from i=1 bcause i=0 is already compared below so if we start from i=0 then i-1=-1 that will put a error
        if(nums[i]==nums[i-1]){
            freq++;
        }else{
            freq=0;//reset freq to 0 because untill here we have not found majority elemnt.if we had found using below for loop we would have returned majority
            majority=nums[i];
        }if(freq>=size/2){
            return majority;
        }
    }return majority;//TC=O(nlogn + n)=O(nlogn)
}
int main()
{
    vector<int> nums={2,2,1,1,1,2,2};
    cout<<maj_elem(nums)<<endl;
    return 0;
}