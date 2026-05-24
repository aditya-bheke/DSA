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

// Function for inorder traversal
void inorder(Node* root){

    // Base condition
    if(root == nullptr){
        return;
    }

    // Step 1: Traverse left subtree
    inorder(root->left);

    // Step 2: Visit root node
    cout << root->data << " ";

    // Step 3: Traverse right subtree
    inorder(root->right);
}

int main(){

    // Creating tree
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Inorder Traversal" << endl;

    // Function call
    inorder(root);

    return 0;
}