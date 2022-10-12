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

Node *insertBegin(Node *head,int n) {
    Node *temp = new Node(n);
    temp->next=head;
    return temp;
}

Node *insertEnd(Node *head,int n) {
    Node *temp = new Node(n);
    if(head == NULL)
        return temp;
    Node *curr = head;
    while(curr->next != NULL)
        curr = curr->next;
    curr->next=temp;
    return head; 
}

Node *insertPos(Node *head,int pos,int n) {
    Node *temp = new Node(n);
    if(pos==1) {
        temp->next=head;
        return temp;
    }
    Node *curr = head;
    for(int i=1;i<=pos-2 && curr!=NULL;i++)
        curr=curr->next;
    if(curr==NULL)
        return head;
    temp->next = curr->next;
    curr->next = temp;
    return head;
}

int main() {
    Node *head = NULL;
    head = insertBegin(head,30);
    head = insertBegin(head,20);
    head = insertBegin(head,10);
    printList(head);
    head =  insertEnd(head,40);
    head =  insertEnd(head,50);
    head =  insertEnd(head,60);
    head =  insertEnd(head,70);
    head =  insertEnd(head,80);
    printList(head);
    head = insertPos(head,5,90);
    printList(head);
    return 0;
}