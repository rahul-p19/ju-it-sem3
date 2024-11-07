/* 1. Write a program to create a singly connected linked list do the following operations on it:
a. Insert a node at a specified position
b. Delete a node from a specified position.
c. Count the number of nodes in the linked list.
d. Reverse print the linked list.
e. Reverse the linked list. */

#include <stdio.h>
#include <stdlib.h>

int i = 0, k;

typedef struct Node{
    int val;
    struct Node *next;
} Node;

void insertManyNodes(Node *header, int n){
    Node *temp = header, *last;
    while (temp->next != NULL)
        temp = temp->next;
    for (i = 0; i < n; i++){
        last = (Node *)malloc(sizeof(Node));
        printf("Enter value of new node: ");
        scanf("%d",&(last->val));
        temp->next = last;
        last->next = NULL;
        temp = last;
    }
}

void insertOneNode(Node *header, int i, Node *t){
    Node *temp = header;
    if (i == 0){
        t->next = temp;
        header = t;
        return;
    }
    for (k = 1; k < i && temp != NULL; k++)
        temp = temp->next;
    if (temp == NULL)
        return;
    t->next = temp->next;
    temp->next = t;
}

void deleteNode(Node *header, int i){
    Node *temp = header, *target;
    if (i == 0){
        header = header->next;
        free(temp);
        return;
    }
    for (k = 1; k < i && temp->next != NULL; k++)
        temp = temp->next;
    if (temp == NULL || temp->next == NULL)
        return;
    target = temp->next;
    temp->next = target->next;
    free(target);
}

int countNodes(Node* header){
    int ctr=0;
    Node *temp = header;
    while(temp!=NULL){
        ++ctr;
        temp=temp->next;
    }
    return ctr;
}

void reversePrint(Node *header){
    Node *temp=NULL, *target;
    if(header==NULL) return;
    while(temp!=header){
        target = header;
        while(target->next!=temp)
            target = target->next;
        printf("%d",target->val);
        temp=target;
    }
}

Node* reverse(Node *header){
    Node *prev=NULL, *future, *curr = header;
    future = curr->next;
    while(curr->next!=NULL){
        curr->next = prev;
        prev = curr;
        curr = future;
        future = future->next;
    }
    curr->next = prev;
    return curr;
}

int main(){
    Node *header = (Node *)malloc(sizeof(Node));
    printf("Enter value of header node: ");
    scanf("%d", &(header->val));
    int choice,n,i,val;
    while(1){
        printf("Enter 1 to insert n nodes, 2 to insert single node, 3 to delete node, 4 to count nodes, 5 to reverse print linked list, 6 to reverse linked list, 7 to exit.\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            /* code */
            break;
        case 2:
            /* code */
            break;
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;
        case 5:
            /* code */
            break;
        case 6:
            /* code */
            break;
        default:
            return 0;
        }
    }
    return 0;
}