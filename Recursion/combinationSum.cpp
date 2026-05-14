#include <bits/stdc++.h>
using namespace std;

/*
    Function: cSum

    Purpose:
    Finds all combinations whose sum becomes equal to target.

    Important Rule:
    Same element can be used multiple times.

    Parameters:
    candidates -> given numbers
    i          -> current index
    combi      -> current combination
    ans        -> stores all valid combinations
    target     -> remaining target
*/
void cSum(vector<int>& candidates,
          int i,
          vector<int>& combi,
          vector<vector<int>>& ans,
          int target) {

    /*
        Base Case 1:

        If target becomes 0,
        valid combination found
    */
    if (target == 0) {

        ans.push_back(combi);
        return;
    }

    /*
        Base Case 2:

        Stop recursion if:
        1. target becomes negative
        2. index goes out of bounds
    */
    if (target < 0 || i >= candidates.size()) {
        return;
    }

    /*
        --------------------------------
        CHOICE 1 : TAKE CURRENT ELEMENT
        --------------------------------

        We include current element
        in combination.

        IMPORTANT:
        index 'i' remains same

        Why?
        Because same element can be
        reused multiple times.
    */
    combi.push_back(candidates[i]);

    cSum(candidates,
         i,
         combi,
         ans,
         target - candidates[i]);

    /*
        Backtracking Step

        Remove last inserted element
        before exploring next choice
    */
    combi.pop_back();

    /*
        --------------------------------
        CHOICE 2 : SKIP CURRENT ELEMENT
        --------------------------------

        Ignore current element
        and move to next index
    */
    cSum(candidates,
         i + 1,
         combi,
         ans,
         target);
}

int main() {

    vector<int> candidates = {2,3,6,7};

    int target = 7;

    // Stores all answers
    vector<vector<int>> ans;

    // Current combination
    vector<int> combi;

    // Start recursion
    cSum(candidates, 0, combi, ans, target);

    // Print all combinations
    cout << "{" << endl;

    for (int i = 0; i < ans.size(); i++) {

        cout << "{ ";

        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }

        cout << "}," << endl;
    }

    cout << "}";

    return 0;
}