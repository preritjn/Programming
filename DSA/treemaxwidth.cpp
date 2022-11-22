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

int maxWidth(Node *root) {
    if(root == NULL)
        return 0;
    queue<Node*> q;
    q.push(root);
    int res = 0;
    while(!q.empty()) {
        int count = q.size();
        res = max(res,count);
        for(int i =0;i<count;i++) {
            Node *curr = q.front();
            q.pop();
            if(curr->left !=NULL)
                q.push(curr->left);
            if(curr->right != NULL)
                q.push(curr->right);
        }
    }
    return res;
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
    int m = maxWidth(root8);
    cout<<m;
    return 0;
}
