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

bool findPath(Node *root,vector<Node*> &path,int n) {
    if(root == NULL) 
        return false;
    path.push_back(root);
    if(root->data == n)
        return true;
    if(findPath(root->left,path,n) || findPath(root->right,path,n))
        return true;
    path.pop_back();
    return false;
}

Node *treeLCA(Node *root,int n1,int n2) {
    vector<Node*> path1,path2;
    if(findPath(root,path1,n1)==false || findPath(root,path2,n2)==false)
        return NULL;
    for(int i =0;i<path1.size()-1 && i<path2.size()-1;i++)
        if(path1[i+1]!=path2[i+1])
            return path1[i];
    return NULL;
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
    cout<<treeLCA(root1,40,50)->data;
    return 0;
}