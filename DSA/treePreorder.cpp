#include<iostream>
using namespace std;

struct Node {
    int key;
    Node *left;
    Node *right;
    Node(int n) {
        key = n;
        left = right = NULL;
    }
};

void preOrder(Node *root) {
    if(root != NULL) {
        cout<<root->key<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main() {
    Node *root = new Node(10);
    Node *root1 = new Node(20);
    Node *root2 = new Node(30);
    Node *root3 = new Node(40);
    Node *root4 = new Node(50);
    root->left = root1;
    root->right = root2;
    root->right->left = root3;
    root->right->right = root4;
    preOrder(root);
    return 0; 
}