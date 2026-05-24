#include<bits/stdc++.h>
using namespace std;

// Structure of tree node
struct Node{
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// Function for level order traversal
void level(Node* root, list<Node*> &li, vector<vector<int>>& ans){

    // If tree is empty
    if(root == nullptr){
        return;
    }

    // Push root node into list(queue)
    li.push_back(root);

    // Continue until queue becomes empty
    while(!li.empty()){

        // Number of nodes at current level
        int size = li.size();

        // Stores one level data
        vector<int> level;

        // Process all nodes of current level
        for(int i = 0; i < size; i++){

            // Get front node
            Node* node = li.front();

            // Add left child to queue
            if(node->left != nullptr)
                li.push_back(node->left);

            // Add right child to queue
            if(node->right != nullptr)
                li.push_back(node->right);

            // Remove processed node
            li.pop_front();

            // Store node data
            level.push_back(node->data);
        }

        // Store current level into answer
        ans.push_back(level);
    }
}

int main(){

    // Creating tree
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Level Order Traversal" << endl;

    // 2D vector to store result
    vector<vector<int>> ans;

    // List works like queue here
    list<Node*> li;

    // Function call
    level(root, li, ans);

    // Printing result
    cout << "{ " << endl;

    for(int i = 0; i < ans.size(); i++){

        cout << "{ ";

        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }

        cout << "}" << endl;
    }

    cout << "}" << endl;

    return 0;
}