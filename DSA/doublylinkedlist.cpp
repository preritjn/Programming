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

int main() {
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;  
    printList(head);
    return 0;
}