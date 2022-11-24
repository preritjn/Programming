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

int res=0;
int burnTime(Node *root,int leaf,int &dist) {
    if(root == NULL)
        return 0;
    if(root->data == leaf) {
        dist =0;
        return 1;
    }
    int ldist=-1,rdist=-1;
    int lh=burnTime(root->left,leaf,ldist);
    int rh=burnTime(root->right,leaf,rdist);
    if(ldist != -1) {
        dist = ldist +1;
        res = max(res,dist+rh);
    }
    else if(rdist != -1) {
        dist = rdist+1;
        res = max(res,dist+lh);
    }
    return max(lh,rh)+1;
}

int main() {
    Node *root1 = new Node(10);
    Node *root2 = new Node(20);
    Node *root3 = new Node(30);
    Node *root4 = new Node(40);
    Node *root5 = new Node(50);
    Node *root6 = new Node(60);
    Node *root7 = new Node(70);
    root1->left = root2;
    root1->right = root3;
    root2->left = root4;
    root2->right = root5;
    root4->left = root6;
    root6->left = root7;
    int dist = -1;
    cout<<burnTime(root1,50,dist);
    return 0;
}