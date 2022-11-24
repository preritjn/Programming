#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left,*right;
    Node(int n) {
        data = n;
        left = right = NULL;
    }
};

Node *treeLCA(Node *root,int n1,int n2) {
    if(root == NULL)
        return NULL;
    if(root->data == n1 || root->data == n2)
        return root;
    Node *lca1 = treeLCA(root->left,n1,n2);
    Node *lca2 = treeLCA(root->right,n1,n2);
    if(lca1 != NULL && lca2 != NULL)
        return root;
    if(lca1 != NULL)
        return lca1;
    else
        return lca2;
}

int main() {
    Node *root1 = new Node(10);
    Node *root2 = new Node(20);
    Node *root3 = new Node(30);
    Node *root4 = new Node(40);
    Node *root5 = new Node(50);
    root1->left = root2;
    root1->right = root3;
    root3->left = root4;
    root3->right = root5;
    cout<<treeLCA(root1,20,50)->data;
    return 0;
}