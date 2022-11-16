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

int isBalanced(Node *root) {
    if(root == NULL)
        return 0;
    int lh = isBalanced(root->left);
    if(lh == -1)
        return -1;
    int rh = isBalanced(root->right);
    if(rh == -1)
        return -1;
    if(abs(lh-rh)>1)
        return -1;
    else    
        return max(lh,rh)+1;
}

int main() {
    Node *root8 = new Node(8);
    Node *root12 = new Node(12);
    Node *root15 = new Node(15);
    Node *root13 = new Node(13);
    Node *root14 = new Node(14);
    Node *root16 = new Node(16);
    Node *root17 = new Node(17);
    root8->left = root12;
    root8->right = root15;
    root12->left = root13;
    root12->right = root14;
    root15->right = root16;
    root16->right = root17;
    if(isBalanced(root8)!=-1)
        cout<<isBalanced(root8);
    else
        cout<<"No";
    return 0;
}