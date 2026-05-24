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

// Function for preorder traversal
void preorder(Node* root){

    // Base condition
    // If node is NULL, stop recursion
    if(root == nullptr){
        return;
    }

    // Step 1: Visit root node
    cout << root->data << " ";

    // Step 2: Traverse left subtree
    preorder(root->left);

    // Step 3: Traverse right subtree
    preorder(root->right);
}

int main(){

    // Creating tree
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Preorder Traversal" << endl;

    // Calling traversal function
    preorder(root);

    return 0;
}