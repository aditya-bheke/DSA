#include<bits/stdc++.h>
using namespace std;

void printAllSubsets(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& allSubsets){
    
    // Base case: when index reaches end → store subset
    if(i == nums.size()){
        allSubsets.push_back(ans);
        return;
    }

    // INCLUDE current element
    ans.push_back(nums[i]);
    printAllSubsets(nums, ans, i+1, allSubsets);

    // BACKTRACK
    ans.pop_back();

    // SKIP duplicates before exclusion
    while(i+1 < nums.size() && nums[i] == nums[i+1]){
        i++;
    }

    // EXCLUDE current element
    printAllSubsets(nums, ans, i+1, allSubsets);
}

int main(){
    vector<int> nums = {1,2,2};

    sort(nums.begin(), nums.end());

    vector<int> ans;
    vector<vector<int>> allSubsets;

    printAllSubsets(nums, ans, 0, allSubsets);
}