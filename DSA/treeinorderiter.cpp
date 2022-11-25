#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *right,*left;
    Node(int n) {
        data =n;
        left = right = NULL;
    }
};

void iterInOrder(Node *root) {
    Node *curr = root;
    stack<Node*> s;
    while(curr != NULL || s.empty() == false) {
        while(curr!= NULL) {
            s.push(curr);
            curr= curr->left;
        }
        curr = s.top();
        s.pop();
        cout<<curr->data<<" ";
        curr = curr->right;
    }
}

int main() {
    Node *root1 = new Node(10);
    Node *root2 = new Node(20);
    Node *root3 = new Node(30);
    Node *root4 = new Node(40);
    Node *root5 = new Node(50);
    root1->left = root2;
    root1->right = root3;
    root2->left = root4;
    root2->right = root5;
    iterInOrder(root1);
    return 0;
}