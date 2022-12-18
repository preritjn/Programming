#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left,*right;
    Node (int n) {
        data = n;
        left = right = NULL;
    }
};

Node *getSuccessor(Node *root) {
    root = root->right;
    while(root != NULL && root->left != NULL)
        root = root->left;
    return root;
}

Node *delNode(Node *root,int n) {
    if(root == NULL)
        return root;
    if(root->data < n)
        root->right = delNode(root->right,n);
    else if(root->data > n)
        root->left = delNode(root->left,n);
    else {
        if(root->left == NULL) {
            Node *temp = root->right;
            delete(root);
            return temp;
        }
        else if(root->right == NULL) {
            Node *temp = root->left;
            delete(root);
            return temp;
        }
        else {
            Node *succ = getSuccessor(root);
            root->data = succ->data;
            root->right = delNode(root->right,succ->data);
        }
        return root;
    }
    return root;
}

void inOrder(Node *root) {
    if(root != NULL) {
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
}

int main() {
    Node *root1 = new Node(50);
    Node *root2 = new Node(30);
    Node *root3 = new Node(70);
    Node *root4 = new Node(10);
    Node *root5 = new Node(40);
    Node *root6 = new Node(60);
    Node *root7 = new Node(80);
    Node *root8 = new Node(55);
    root1->left = root2;
    root1->right = root3;
    root2->left = root4;
    root2->right = root5;
    root3->left = root6;
    root3->right = root7;
    root6->left = root8;
    inOrder(root1);
    root1 = delNode(root1,50);
    cout<<endl;
    inOrder(root1);
    return 0;
}