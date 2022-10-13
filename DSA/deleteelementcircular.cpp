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
    Node *p = head;
    do {
        cout<<p->data<<" "<<p->next<<endl;
        p = p->next;
    }while(p != head);
}

Node *insertBegin(Node *head,int n) {
    Node *temp = new Node(n);
    if(head == NULL) {
        temp->next = temp;
        return temp;
    }
    else {
        temp->next = head->next;
        head->next = temp;
        int d = head->data;
        head->data = temp->data;
        temp->data = d;
        return head;
    }
}


Node *insertEnd(Node *head,int n) {
    Node *temp = new Node(n);
    if(head == NULL) {
        temp->next = temp;
        return temp;
    }
    else {
        temp->next = head->next;
        head->next = temp;
        int d = head->data;
        head->data = temp->data;
        temp->data = d;
        return temp;
    }
}

Node *delHead(Node *head) {
    if(head == NULL)
        return NULL;
    if(head->next == NULL) {
        delete head;
        return NULL;
    }
    head->data = head->next->data;
    Node *temp = head->next;
    head->next = head->next->next;
    delete temp;
    return head;
}

Node *delNode(Node *head,int k) {
    if(head == NULL)
        return NULL;
    if(k==1)
        return delHead(head);
    Node *curr = head;
    for(int i = 0; i < k-2 ;i++)
        curr = curr->next;
    Node *temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
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
    int k;
    cout<<"Enter the node you want to delete : ";
    cin>>k;
    head = delNode(head,k);
    printList(head);
    return 0;
}