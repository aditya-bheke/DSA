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

vector<int> postorderTraversal(TreeNode* root) {

    vector<int> ans;

    stack<TreeNode*> st;

    TreeNode* curr = root;
    TreeNode* temp = NULL;

    while(curr != NULL || !st.empty()) {

        /*
            Keep going LEFT first
            because postorder starts from left subtree.
        */
        if(curr != NULL) {

            st.push(curr);

            curr = curr->left;
        }
        else {

            /*
                Check right subtree
                of top node.
            */
            temp = st.top()->right;

            /*
                If right subtree does not exist,
                current node is ready to process.
            */
            if(temp == NULL) {

                temp = st.top();
                st.pop();

                ans.push_back(temp->val);

                /*
                    Keep popping while
                    current node is the right child
                    of stack top.

                    Means both subtrees are done.
                */
                while(!st.empty() && temp == st.top()->right) {

                    temp = st.top();
                    st.pop();

                    ans.push_back(temp->val);
                }
            }
            else {

                /*
                    Right subtree exists.

                    Move to right subtree first
                    before processing root.
                */
                curr = temp;
            }
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

    vector<int> ans = postorderTraversal(root);

    for(int x : ans)
        cout << x << " ";
}