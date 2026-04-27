#include<bits/stdc++.h>
using namespace std;

// Function to generate all permutations
void permut(vector<int>& nums, int idx, vector<vector<int>>& ans){

    // Base case:
    // If current index reaches end, one permutation is formed
    if(idx == nums.size()){
        ans.push_back({nums}); // store current permutation
        return;
    }

    // Try placing every possible element at position idx
    for(int i = idx; i < nums.size(); i++){

        // Step 1: Choose
        // Place nums[i] at current position idx
        swap(nums[i], nums[idx]);

        // Step 2: Explore
        // Fix next position
        permut(nums, idx + 1, ans);

        // Step 3: Backtrack
        // Restore original array before next iteration
        swap(nums[i], nums[idx]);
    }
}

int main(){

    // Input array
    vector<int> nums = {1, 2, 3};

    // To store all permutations
    vector<vector<int>> ans;

    // Start recursion from index 0
    permut(nums, 0, ans);

    // Print all permutations
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}