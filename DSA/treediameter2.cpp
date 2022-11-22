#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *left,*right;
    Node(int n) {
        data = n;
        left = right = NULL;
    }
};

int res = 0;
int height(Node *root) {
    if(root == NULL)
        return 0;
    int lh = height(root->left);
    int rh = height(root->right);
    res = max(res,(lh+rh+1)); 
    return 1+max(lh,rh);
}

int main() {
    Node *root1 = new Node(10);
    Node *root2 = new Node(20);
    Node *root3 = new Node(30);
    Node *root4 = new Node(40);
    Node *root5 = new Node(50);
    Node *root6 = new Node(60);
    Node *root7 = new Node(70);
    root1->left = root2;
    root1->right = root3;
    root3->left = root4;
    root3->right = root6;
    root4->left = root5;
    root6->right = root7;
    cout<<height(root1);
    return 0;
}