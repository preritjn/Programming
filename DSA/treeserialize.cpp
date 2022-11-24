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

Node *insert(Node *root,int x) {
    if(root == NULL)
        return new Node(x);
    else if(root->data < x)
        root->right = insert(root->right,x);
    else if(root->data > x)
        root->left = insert(root->left,x);
    return root;
}

void serialize(Node *root,vector<int> &v) {
    static int empty = -1;
    if(root == NULL) {
        v.push_back(empty);
        return;
    }
    v.push_back(root->data);
    serialize(root->left,v);
    serialize(root->right,v);
}

int main() {
    Node *root = NULL; 
    root = insert(root,10);
    root = insert(root,20);
    root = insert(root,60);
    root = insert(root,78);
    root = insert(root,21);
    root = insert(root,1);
    vector<int> v;
    serialize(root,v);
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    return 0;
}