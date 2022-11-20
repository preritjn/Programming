#include<bits/stdc++.h>
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

void printTree(Node *root) {
    if(root == NULL)
        return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()) {
        int count = q.size();
        for(int i = 0;i<count;i++) {
            Node *curr = q.front();
            q.pop();
            cout<<curr->key<<" ";
            if(curr->left != NULL) 
                q.push(curr->left);
            if(curr->right != NULL)
                q.push(curr->right);
        }
        cout<<endl;
    }
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
    printTree(root1);
    return 0;
}