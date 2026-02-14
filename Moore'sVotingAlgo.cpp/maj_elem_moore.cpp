#include<iostream>
#include<vector>
using namespace std;
int maj_elem(vector<int> nums){
    int size=nums.size();
    int freq=0,ans=0;
    for(int i=0;i<size;i++){
        if(freq==0){
            ans=nums[i];
        }if(ans==nums[i]){
            freq++;
        }else{
            freq--;
        }
    }return ans;
}
int main()
{
    vector<int> nums={2,2,1,1,1,2,2};
    cout<<maj_elem(nums)<<endl;
    return 0;
}