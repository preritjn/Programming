#include<iostream>
#include<cmath>
using namespace std;

struct Node {
    int data;
    Node *left,*right;
    Node(int n) {
        data = n;
        left = right = NULL; 
    }
};

Node *insert(Node *root,int x) {
    if(root == NULL)
        return new Node(x);
    else if(root->data < x)
        root->right = insert(root->right,x);
    else if(root->data > x)
        root->left = insert(root->left,x);
    return root;
}

int count(Node *root) {
    int lh=0,rh=0;
    Node *curr = root;
    while(curr != NULL) {
        lh++;
        curr = curr->left;
    }
    curr = root;
    while(curr != NULL) {
        rh++;
        curr = curr->right;
    }
    if(lh==rh)
        return pow(2,lh)-1;
    return 1+count(root->left)+count(root->right);
}

int main() {
    Node *root = NULL;
    root = insert(root,10);
    root = insert(root,20);
    root = insert(root,30);
    root = insert(root,40);
    root = insert(root,50);
    root = insert(root,60);
    root = insert(root,70);
    root = insert(root,80);
    root = insert(root,90);
    root = insert(root,100);
    root = insert(root,110);
    root = insert(root,120);
    cout<<count(root);
    return 0;
}