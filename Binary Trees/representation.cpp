#include<bits/stdc++.h>
using namespace std;

// Structure of a tree node
struct Node{
    int data;      // stores value of node
    Node* left;    // pointer to left child
    Node* right;   // pointer to right child

    // Constructor to initialize node
    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

int main(){

    // Creating root node
    Node* root = new Node(1);

    // Creating left and right child of root
    root->left = new Node(2);
    root->right = new Node(3);

    // Printing root data
    cout << root->data;

    return 0;
}