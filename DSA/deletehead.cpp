#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int n) {
        data = n;
        next = NULL;
    }
};

Node *delHead(Node *head) {
    if(head == NULL)
        return NULL;
    else {
        Node *temp = head->next;
        delete head;
        return temp;
    }
}

Node *insertBegin(Node *head,int n) {
    Node *temp = new Node(n);
    temp->next=head;
    return temp;
}

void printList(Node *head) {
    if(head == NULL)
        return;
    cout<<head->data<<" "<<head->next<<endl;
    printList(head->next);
}

int main() {
    Node *head=NULL;
    head = insertBegin(head,30);
    head = insertBegin(head,20);
    head = insertBegin(head,10);
    printList(head);
    head = delHead(head);
    printList(head);
    return 0;
}