#include<iostream>
#include<vector>
using namespace std;
vector<int> pair_Sum(vector<int> nums,int target){
    vector<int> ans;
    int size=nums.size();
    int start=0,end=size-1;
    while(start<end){
        int pairsum=nums[start]+nums[end];
        if(pairsum<target){
            start++;
        }else if(pairsum>target){
            end--;
        }else{
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
    }return ans;

}
int main()
{
    vector<int> nums={2,7,11,15};
    int target=11;
    vector<int> ans=pair_Sum(nums,target);
    if(ans.size()>=2){
        cout<<ans[0]<<", "<<ans[1]<<endl;
    }
    return 0;
}