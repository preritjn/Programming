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

bool childSum(Node *root) {
    if(root == NULL)
        return true;
    if(root->left == NULL && root->right == NULL)
        return true;
    int sum = 0;
    if(root->left != NULL)
        sum+=root->left->key;
    if(root->right != NULL)
        sum+=root->right->key;
    return (sum == root->key && childSum(root->left) && childSum(root->right));
}

int main() {
    Node *root1 = new Node(20);
    Node *root2 = new Node(8);
    Node *root3 = new Node(12);
    Node *root4 = new Node(3);
    Node *root5 = new Node(9);
    root1->left = root2;
    root1->right = root3;
    root3->left = root4;
    root3->right = root5;
    if(childSum(root1))
        cout<<"Yes";
    else 
        cout<<"No";
    return 0; 
}