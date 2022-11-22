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

int height(Node *root) {
    if(root == NULL)
        return 0;
    return max(height(root->left),height(root->right)+1);
}

int diameter(Node *root) {
    if(root == NULL)
        return 0;
    int d1 =  1+height(root->left)+height(root->right);
    int d2 = diameter(root->left);
    int d3 = diameter(root->right);
    return max(d1,max(d2,d3));
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
    cout<<diameter(root1);
    return 0;
}