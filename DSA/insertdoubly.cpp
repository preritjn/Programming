#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;
    Node(int n) {
        data = n;
        next = NULL;
        prev = NULL;
    }
};

void printList(Node *head) {
    if(head == NULL)
        return;
    cout<<head->prev<<" "<<head->data<<" "<<head->next<<endl;
    printList(head->next);
}

Node *insertBegin(Node *head,int n) {
    Node *temp = new Node(n);
    temp->next = head;
    if(head != NULL)
    head->prev = temp;
    return temp;
}

Node *insertEnd(Node *head,int n) {
    Node *temp = new Node(n);
    if(head == NULL)
        return temp;
    Node *curr = head;
    while(curr->next != NULL)
        curr=curr->next;
    curr->next = temp;
    temp->prev = curr;
    return head;
}

int main() {
    Node *head = NULL;
    head = insertBegin(head,50);
    head = insertBegin(head,40);
    head = insertBegin(head,30);
    head = insertBegin(head,20);
    head = insertBegin(head,10);
    printList(head);
    head = insertEnd(head,60);
    head = insertEnd(head,70);
    head = insertEnd(head,80);
    head = insertEnd(head,90);
    head = insertEnd(head,100);
    printList(head);    
    return 0;
}