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

// using for loop

// void printList(Node *head) {
//     if(head == NULL)
//         return;
//     cout<<head->data<<" "<<head->next<<endl;
//     for(Node *p = head->next; p != head; p=p->next)
//         cout<<p->data<<" "<<p->next<<endl;
// }

// using dowhile

void printList(Node *head) {
    if(head == NULL)
        return;
    Node *p = head;
    do {
        cout<<p->data<<" "<<p->next<<endl;
        p=p->next;
    }while(p != head);
}

int main() {
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = head;
    printList(head);
    return 0;
}