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

Node *insertBegin(Node *head,int n) {
    Node *temp = new Node(n);
    if(head == NULL)
        return temp;
    temp->next = head;
    return temp;
}

Node *insertEnd(Node *head,int n) {
    Node *temp = new Node(n);
    if(head == NULL) 
        return temp;
    Node *curr = head;
    while(curr->next != NULL)
        curr = curr->next;
    curr->next = temp;
    return head;
}

void printList(Node *head) {
    if(head == NULL)
        return;
    cout<<head->data<<" "<<head->next<<endl;
    printList(head->next);
}

Node *insertSorted(Node *head,int n) {
    Node *temp = new Node(n);
    if(head == NULL)
        return temp;
    if(n<head->data) {
        temp->next = head;
        return temp;
    }
    Node *curr = head;
    while(curr != NULL && curr->next->data < n) 
        curr = curr->next;
    temp->next = curr->next;
    curr->next = temp;
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
    int x;
    cout<<"Enter a number you want to insert : ";
    cin>>x;
    head = insertSorted(head,x);
    printList(head);
    return 0;
}