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

// method 1

// void printnthFromEnd(Node *head,int n) {
//     int l = 0;
//     Node *curr = head;
//     for(curr = head; curr != NULL;curr = curr->next)
//         l++;
//     if(l<n)
//         return;
//     curr = head;
//     for(int i = 1; i<l-n+1; i++)
//         curr = curr->next;
//     cout<<curr->data;
// }

// method 2

void printnthFromEnd(Node *head,int n) {
    Node *first = head,*second = head;
    if(head == NULL)
        return;
    for(int i =1;i<=n;i++) {
        if(first == NULL)
            return;
        first = first->next;
    }
    while(first != NULL) {
        second = second->next;
        first = first->next;
    }
    cout<<second->data<<endl;
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
    printnthFromEnd(head,3);
}