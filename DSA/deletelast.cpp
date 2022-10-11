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

void printList(Node *head) {
    if(head == NULL) 
        return;
    cout<<head->data<<" "<<head->next<<endl;
    printList(head->next);
}

Node *insertEnd(Node *head,int n) {
    Node *temp = new Node(n);
    if(head == NULL)
        return temp;
    Node *curr = head;
    while(curr->next != NULL)
        curr=curr->next;
    curr->next=temp;
    return head;
}

Node *delLast(Node *head) {
    if(head == NULL)
        return NULL;
    if(head->next == NULL) {
        delete head;
        return NULL;
    }
    Node *curr = head;
    while(curr->next->next != NULL)
        curr=curr->next;
    delete(curr->next);
    curr->next= NULL;
    return head;    
}

int main() {
    Node *head = NULL;
    head = insertEnd(head,10);
    head = insertEnd(head,20);
    head = insertEnd(head,30);
    head = insertEnd(head,40);
    printList(head);
    head = delLast(head);
    printList(head);
    return 0;
}