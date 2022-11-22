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

// recursive 

// bool search(Node *root,int x) {
//     if(root == NULL)
//         return false;
//     else if(root->data == x)
//         return true;
//     else if(root->data < x)
//         return search(root->right,x);
//     else
//         return search(root->left,x);
// }

// iterative

bool search(Node *root,int x) {
    while(root != NULL) {
        if(root->data == x)
            return true;
        else if(root->data < x)
            root = root->right;
        else
            root = root->left;
    }
    return false;
}

int main() {
    Node *root1 = new Node(15);
    Node *root2 = new Node(5);
    Node *root3 = new Node(20);
    Node *root4 = new Node(3);
    Node *root5 = new Node(18);
    Node *root6 = new Node(80);
    Node *root7 = new Node(16);
    root1->left = root2;
    root1->right = root3;
    root2->left = root4;
    root3->left = root5;
    root3->right = root6;
    root5->left = root7;
    int x;
    cin>>x;
    cout<<search(root1,x);
    return 0;
}
