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

Node *insertBegin(Node *head,int n) {
    Node *temp = new Node(n);
    if(head == NULL) {
        temp->next = temp;
        temp->prev = temp;
        return temp;
    }
    else {
        temp->prev = head->prev;
        temp->next = head;
        head->prev->next = temp;
        head->prev = temp;
        return temp;
    }
}

Node *insertEnd(Node *head,int n) {
    Node *temp = new Node(n);
    if(head == NULL) {
        temp->next = temp;
        temp->prev = temp;
        return temp;
    }
    else {
        temp->prev = head->prev;
        temp->next = head;
        head->prev->next = temp;
        head->prev = temp;
        return head;
    }
}

void printList(Node *head) {
    if(head == NULL)
        return;
    Node *p = head;
    do {
        cout<<p->prev<<" "<<p->data<<" "<<p->next<<endl;
        p = p->next;
    }while(p != head);
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