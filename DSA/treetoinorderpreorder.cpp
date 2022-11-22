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

int preIndex = 0;
Node *cTree(int in[],int pre[],int is,int ie) {
    if(is>ie)
        return NULL;
    Node *root = new Node(pre[preIndex++]);
    int inIndex;
    for(int i = is;i<=ie;i++) 
        if(in[i]==root->data) {
            inIndex = i;
            break;
        }
    root->left = cTree(in,pre,is,inIndex-1);
    root->right = cTree(in,pre,inIndex+1,ie);
    return root;
}

void inOrder(Node *root) {
    if(root != NULL) {
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
}

int main() {
    int in[] = {40,20,60,50,70,10,80,100,30};
    int pre[] = {10,20,40,50,60,70,30,80,100};
    Node *root = cTree(in,pre,0,8);
    inOrder(root);
    return 0;
}