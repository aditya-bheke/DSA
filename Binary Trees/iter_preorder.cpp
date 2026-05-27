#include<bits/stdc++.h>
using namespace std;

// Definition of Binary Tree Node
struct TreeNode {

    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

vector<int> preorderTraversal(TreeNode* root) {

    vector<int> ans;

    // If tree is empty
    if(root == NULL)
        return ans;

    stack<TreeNode*> st;

    // Push root node first
    st.push(root);

    while(!st.empty()) {

        // Take top node
        TreeNode* node = st.top();

        // Remove it from stack
        st.pop();

        // Process current node
        ans.push_back(node->val);

        /*
            Preorder = Root Left Right

            Stack works in LIFO order.

            So we push RIGHT first,
            then LEFT.

            This ensures LEFT gets processed first.
        */

        if(node->right != NULL)
            st.push(node->right);

        if(node->left != NULL)
            st.push(node->left);
    }

    return ans;
}

int main() {

    /*
                    1
                  /   \
                 2     3
                / \   / \
               4   5 6   7
    */

    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    vector<int> ans = preorderTraversal(root);

    for(int x : ans)
        cout << x << " ";
}