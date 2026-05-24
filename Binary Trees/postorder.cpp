#include<bits/stdc++.h>
using namespace std;

// Tree node structure
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

// Function for postorder traversal
void postorder(Node* root){

    // Base condition
    if(root == nullptr){
        return;
    }

    // Step 1: Traverse left subtree
    postorder(root->left);

    // Step 2: Traverse right subtree
    postorder(root->right);

    // Step 3: Visit root node
    cout << root->data << " ";
}

int main(){

    // Creating binary tree
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Postorder Traversal" << endl;

    // Function call
    postorder(root);

    return 0;
}