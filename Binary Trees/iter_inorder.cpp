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

vector<int> inorderTraversal(TreeNode* root) {

    vector<int> ans;

    stack<TreeNode*> st;

    // Start traversal from root
    TreeNode* node = root;

    while(true) {

        /*
            Keep moving LEFT
            because inorder starts from left subtree.

            Push nodes into stack
            so we can return back later.
        */
        if(node != NULL) {

            st.push(node);

            node = node->left;
        }
        else {

            /*
                If stack becomes empty,
                traversal is complete.
            */
            if(st.empty())
                break;

            /*
                Top node is the next node
                whose left subtree is finished.
            */
            node = st.top();

            st.pop();

            // Process current node
            ans.push_back(node->val);

            /*
                After processing root,
                move to right subtree.
            */
            node = node->right;
        }
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

    vector<int> ans = inorderTraversal(root);

    for(int x : ans)
        cout << x << " ";
}