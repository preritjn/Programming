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

Node *floorNode(Node *root,int n) {
    Node *res = NULL;
    while(root != NULL) {
        if(root->data == n)
            return root;
        else if(root->data > n)
            root = root->left;
        else {
            res = root;
            root = root->right;
        }
    }
    return res;
}

int main() {
    Node *root1 = new Node(50);
    Node *root2 = new Node(30);
    Node *root3 = new Node(70);
    Node *root4 = new Node(20);
    Node *root5 = new Node(40);
    Node *root6 = new Node(60);
    Node *root7 = new Node(80);
    Node *root8 = new Node(55);
    Node *root9 = new Node(65);
    root1->left = root2;
    root1->right = root3;
    root2->left = root4;
    root2->right = root5;
    root3->left = root6;
    root3->right = root7;
    root6->left = root8;
    root6->right = root9;
    Node *curr = floorNode(root1,68);
    cout<<curr->data;
    return 0;
}