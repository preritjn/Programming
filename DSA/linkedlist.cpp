#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int n) {
        data =n;
        next = NULL;
    }
};

// without recursion

// void printList(Node *head) {
//     Node *curr = head;
//     while(curr!=NULL) {
//         cout<<curr->data<<" "<<curr->next<<endl;
//         curr=curr->next;
//     }
// }

// with recursion

void printList(Node *head) {
    if(head == NULL)
        return;
    cout<<head->data<<" "<<head->next<<endl;
    printList(head->next);    
}

int main() {
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    Node *temp3 = new Node(40);
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;
    printList(head);
    /*
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    return 0;
    */

    return 0;
}