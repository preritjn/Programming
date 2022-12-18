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

Node *insert(Node *root,int x) {
    if(root == NULL)
        return new Node(x);
    else if(root->data < x)
        root->right = insert(root->right,x);
    else if(root->data > x)
        root->left = insert(root->left,x);
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
    Node *root1 = new Node(10);
    Node *root2 = new Node(5);
    Node *root3 = new Node(15);
    Node *root4 = new Node(12);
    Node *root5 = new Node(18);
    root1->left = root2;
    root1->right = root3;
    root3->left = root4;
    root3->right = root5;
    int n;
    cin>>n;
    Node *root = insert(root1,n);
    inOrder(root);
    return 0;
}