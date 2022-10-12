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
    temp->next = head;
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
    return head;
}

int searchList(Node *head,int n) {
    if(head == NULL)
        return -1;
    if(head->data == n)
        return 1;
    else {
        int res = searchList(head->next,n);
        if(res == -1)
            return -1;
        else
        return res+1;
    }
}

int main() {
    Node *head = NULL;
    head = insertBegin(head,25);
    head = insertBegin(head,20);
    head = insertBegin(head,15);
    head = insertBegin(head,10);
    head = insertBegin(head,5);
    printList(head);
    head = insertEnd(head,30);
    head = insertEnd(head,35);
    head = insertEnd(head,40);
    head = insertEnd(head,45);
    head = insertEnd(head,50);
    printList(head);
    cout<<searchList(head,35);
    return 0;
}