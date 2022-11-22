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

void spiral(Node *root) {
    if(root == NULL)
        return;
    queue<Node*> q;
    stack<int> s;
    bool reverse = false;
    q.push(root);
    while(!q.empty()) {
        int count = q.size();
        for(int i=0;i<count;i++) {
            Node *curr = q.front();
            q.pop();
            if(reverse)
                s.push(curr->data);
            else
                cout<<curr->data<<" ";
            if(curr->left != NULL)
                q.push(curr->left);
            if(curr->right != NULL)
                q.push(curr->right);
        }
        if(reverse) {
            while(!s.empty()) {
                cout<<s.top()<<" ";
                s.pop();
            }
        }
        reverse = !reverse;
    }
}

int main() {
    Node *root1 = new Node(1);
    Node *root2 = new Node(2);
    Node *root3 = new Node(3);
    Node *root4 = new Node(4);
    Node *root5 = new Node(5);
    Node *root6 = new Node(6);
    Node *root7 = new Node(7);
    root1->left = root2;
    root1->right = root3;
    root2->left = root4;
    root2->right = root5;
    root3->left = root6;
    root3->right = root7;
    spiral(root1);
    return 0;
}