#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void printList(struct Node *head) {
    if(head == NULL) 
        return;
    printf("%d\n", head->data);
    printList(head->next);
}

struct Node *insertBegin(struct Node *head,int n) {
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = n;
    temp->next = head;
    return temp;   
}

struct Node *deleteBegin(struct Node *head) {
    if(head == NULL) {
        printf("List is empty\n");
        return NULL;
    }
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp = head->next;
    free(head);
    return temp;
}

struct Node *reverseList(struct Node *head) {
    struct Node *curr = head;
    struct Node *prev = NULL;
    while(curr != NULL) {
        struct Node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

int main() {
    struct Node *head = (struct Node*)malloc(sizeof(struct Node));
    struct Node *temp1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node *temp2 = (struct Node*)malloc(sizeof(struct Node));
    head->data = 10;
    head->next = temp1;
    temp1->data = 20;
    temp1->next = temp2;
    temp2->data = 30;
    temp2->next = NULL;
    while (1) {
        printf("1. Insert\n2. Delete\n3. Print\n4. Reverse\n5. Exit\n");
        int n,a;
        scanf("%d",&n);
        if(n == 5)
            break;
        switch(n) {
            case 1 :
                printf("Enter the number you want to insert : ");
                scanf("%d",&a);
                head = insertBegin(head,a);
                break;
            case 2 :
                head = deleteBegin(head);
                break;
            case 3 :
                printList(head);
                break;
            case 4 : 
                head = reverseList(head);
        }
    }
    return 0;
}