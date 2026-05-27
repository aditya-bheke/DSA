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

    if(root == NULL)
        return ans;

    stack<TreeNode*> s1;
    stack<TreeNode*> s2;

    // Push root into first stack
    s1.push(root);

    while(!s1.empty()) {

        // Remove node from first stack
        TreeNode* node = s1.top();
        s1.pop();

        /*
            Store node in second stack.

            Second stack reverses order later.
        */
        s2.push(node);

        /*
            We push LEFT first,
            then RIGHT.

            Because second stack reverses order,
            final traversal becomes:
            Left Right Root
        */

        if(node->left != NULL)
            s1.push(node->left);

        if(node->right != NULL)
            s1.push(node->right);
    }

    /*
        Nodes inside second stack are now
        in reverse postorder.

        Popping gives actual postorder.
    */
    while(!s2.empty()) {

        ans.push_back(s2.top()->val);

        s2.pop();
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