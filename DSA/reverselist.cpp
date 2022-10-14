#include<bits/stdc++.h>
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

// Node *reverse(Node *head) {
//     vector<int> arr;
//     Node *curr = head;
//     for(curr = head; curr != NULL; curr = curr->next)
//         arr.push_back(curr->data);
//     for(curr = head; curr != NULL; curr = curr->next) {
//         curr->data = arr.back();
//         arr.pop_back();
//     }
//     return head;
// }

Node *reverse(Node *head) {
    Node *curr = head;
    Node *prev = NULL;
    while(curr != NULL) {
        Node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
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
    head = reverse(head);
    printList(head);
    return 0;
}