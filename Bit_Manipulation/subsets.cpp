#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> subsets(vector<int>nums){
    int n=nums.size();
    int subsets=1<<n;
    vector<vector<int>>ans;
    for(int num=0;num<subsets;num++){
        vector<int>subset;
        for(int i=0;i<n;i++){
            if(num & (1<<i)){
                subset.push_back(nums[i]);
            }
        }ans.push_back(subset);
    }
    return ans;
}
int main(){
    vector<int>nums;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        nums.push_back(num);
    }
    vector<vector<int>>result=subsets(nums);
    for(int i=0;i<result.size();i++){
        cout<<"{";
        for(int j=0;j<result[i].size();j++){
            cout<<result[i][j]<<"";
        }
        cout<<"}";
    }
    return 0;
}