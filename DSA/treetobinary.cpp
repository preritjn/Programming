#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *left,*right;
    Node(int n) {
        data = n;
        left = right = NULL;
    }
};


Node *binToDll(Node *root) {
    Node *prev = NULL;
    if(root == NULL)
        return root;
    Node *head = binToDll(root->left);
    if(prev == NULL)
        head = root;
    else {
        root->left = prev;
        prev->right = root;
    }
    prev = root;
    binToDll(root->right);
    return head;
}

void printList(Node *head) {
    if(head != NULL) {
        printList(head->left);
        cout<<head->left<<" "<<head->data<<" "<<head->right<<endl;
        printList(head->right);
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
    Node *head = binToDll(root1);
    printList(head);
    return 0;
}