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

// void printMiddle(Node *head) {
//     if(head == NULL)
//         return;
//     int c = 0;
//     Node *curr;
//     for(curr = head; curr != NULL; curr = curr->next)
//         c++;
//     curr = head;
//     for(int i = 0; i <c/2; i++)
//         curr=curr->next;
//     cout<<curr->data<<endl;;
// }

void printMiddle(Node *head) {
    if(head == NULL) 
        return;
    Node *slow = head,*fast = head;
    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout<<slow->data<<endl;
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
    printMiddle(head);
    return 0;
}