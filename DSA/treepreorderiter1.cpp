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

void iterPreOrder(Node *root) {
    if(root == NULL)
        return;
    
}

int main() {
    Node *root1 = new Node(10);
    Node *root2 = new Node(20);
    Node *root3 = new Node(30);
    Node *root4 = new Node(40);
    Node *root5 = new Node(50);
    Node *root6 = new Node(60);
    Node *root7 = new Node(70);
    Node *root8 = new Node(80);
    Node *root9 = new Node(90);
    root1->left = root2;
    root1->right = root3;
    root2->left = root4;
    root2->right = root5;
    root3->left = root6;
    root4->left = root7;
    root4->right = root8;
    root5->right = root9;
    iterPreOrder(root1);
    return 0;
}