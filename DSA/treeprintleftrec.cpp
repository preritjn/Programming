#include<iostream>
using namespace std;

struct Node {
    int key;
    Node *left;
    Node *right;
    Node(int n) {
        left = right = NULL;
        key = n;
    }
};

int maxLevel = 0;
void printLeft(Node *root,int level) {
    if(root == NULL)
        return;
    if(level>maxLevel) {
        cout<<root->key<<" ";
        maxLevel = level;
    }
    printLeft(root->left,level+1);
    printLeft(root->right,level+1);
}

int main() {
    Node *root1 = new Node(10);
    Node *root2 = new Node(15);
    Node *root3 = new Node(20);
    Node *root4 = new Node(30);
    Node *root5 = new Node(40);
    Node *root6 = new Node(50);
    Node *root7 = new Node(60);
    Node *root8 = new Node(70);
    root1->left = root2;
    root1->right = root3;
    root2->left = root4;
    root3->left = root5;
    root3->right = root6;
    root5->left = root7;
    root5->right = root8;
    printLeft(root1,1);
    return 0;
}