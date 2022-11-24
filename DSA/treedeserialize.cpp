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

Node *deserialize(vector<int> &v) {
    static int empty = -1,index = 0;
    if(index == v.size())
        return NULL;
    int val = v[index];
    index++;
    if(val == empty)
        return NULL;
    Node *root = new Node(val);
    root->left = deserialize(v);
    root->right = deserialize(v);
    return root;
}

void preOrder(Node *root) {
    if(root != NULL) {
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}   

int main() {
    vector<int> v(5);
    for(int i=0;i<5;i++)
        cin>>v[i];
    Node *root = deserialize(v);
    preOrder(root);      
    return 0;
}