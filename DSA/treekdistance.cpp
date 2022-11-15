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

void printTree(Node *root,int k) {
    if(root == NULL)   
        return;
    if(k==0) 
        cout<<root->key<<" ";
    else {
        printTree(root->left,k-1);
        printTree(root->right,k-1);
    }
}

int main() {
    Node *root1 = new Node(10);
    Node *root2 = new Node(20);
    Node *root3 = new Node(30);
    Node *root4 = new Node(40);
    Node *root5 = new Node(50);
    Node *root6 = new Node(60);
    Node *root7 = new Node(70);
    Node *root8 = new Node(80);
    root1->left = root2;
    root2->left = root4;
    root2->right = root5;
    root1->right = root3;
    root3->right = root7;
    root7->right = root8;
    printTree(root1,2);
    return 0;
}