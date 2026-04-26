#include<bits/stdc++.h>
using namespace std;

// Recursive function to generate all subsets
void printAllSubsets(vector<int>& nums, vector<int>& ans, int i) {

    // Base case: when index reaches 3 (size of nums)
    if(i == nums.size()) {
        cout << "[ ";
        for(int j = 0; j < ans.size(); j++) {
            cout << ans[j] << " ";
        }
        cout << "]\n";
        return;
    }

    // INCLUDE current element
    ans.push_back(nums[i]);           // choose element
    printAllSubsets(nums, ans, i+1);  // move to next index

    // EXCLUDE current element (Backtracking step)
    ans.pop_back();                  // undo the choice
    printAllSubsets(nums, ans, i+1); // explore path without element
}

int main() {
    vector<int> nums = {1,2,3};
    vector<int> ans;  // stores current subset
    int i = 0;

    printAllSubsets(nums, ans, i);
    return 0;
}