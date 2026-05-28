#include <bits/stdc++.h>
using namespace std;

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

class Solution {
public:

    /*
        We will store:
        {node, state}

        state = 1  -> preorder part pending
        state = 2  -> inorder part pending
        state = 3  -> postorder part pending
    */

    void allTraversals(TreeNode* root,
                       vector<int>& pre,
                       vector<int>& in,
                       vector<int>& post) {

        // Empty tree
        if(root == NULL) return;

        // Stack stores {node, state}
        stack<pair<TreeNode*, int>> st;

        // Initially root enters preorder state
        st.push({root, 1});

        while(!st.empty()) {

            /*
                Get top element from stack

                IMPORTANT:
                This is ONLY a COPY of the top element.
                Changes made to 'it' do NOT change stack contents.
            */
            auto it = st.top();

            /*
                Remove old version from stack.

                Why pop first?

                Suppose stack top is:
                (1,1)

                We process preorder and want to change it to:
                (1,2)

                But stack elements cannot magically update
                because 'it' is only a copy.

                So we:
                1. pop old state
                2. modify copy
                3. push updated state back

                This simulates recursion manually.
            */
            st.pop();

            // ================= PREORDER =================
            if(it.second == 1) {

                // Preorder => process node first
                pre.push_back(it.first->val);

                /*
                    Move node to next state.

                    state 1 -> state 2
                */
                it.second++;

                /*
                    Push updated state back.

                    Meaning:
                    "Preorder work done,
                    inorder work still pending."
                */
                st.push(it);

                /*
                    Now go to left subtree first
                    because preorder = Root Left Right
                */
                if(it.first->left != NULL) {
                    st.push({it.first->left, 1});
                }
            }

            // ================= INORDER =================
            else if(it.second == 2) {

                // Inorder => left done, now process root
                in.push_back(it.first->val);

                /*
                    Move node to next state.

                    state 2 -> state 3
                */
                it.second++;

                /*
                    Push updated state back.

                    Meaning:
                    "Inorder work done,
                    postorder work still pending."
                */
                st.push(it);

                /*
                    Now process right subtree
                    because inorder = Left Root Right
                */
                if(it.first->right != NULL) {
                    st.push({it.first->right, 1});
                }
            }

            // ================= POSTORDER =================
            else {

                /*
                    Postorder => left done,
                    right done,
                    now process root
                */
                post.push_back(it.first->val);

                /*
                    No push back now.

                    Why?

                    All 3 states are complete.

                    Node processing is fully finished.
                */
            }
        }
    }
};

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

    vector<int> pre, in, post;

    Solution obj;
    obj.allTraversals(root, pre, in, post);

    cout << "Preorder: ";
    for(auto x : pre) cout << x << " ";
    cout << "\n";

    cout << "Inorder: ";
    for(auto x : in) cout << x << " ";
    cout << "\n";

    cout << "Postorder: ";
    for(auto x : post) cout << x << " ";
    cout << "\n";

    return 0;
}