#include <stdio.h>

typedef struct Node{
    int val;
    struct Node *prev;
    struct Node *next;
}Node;

void insertNode(Node *header, Node *new, Node *target){
new->next = target->next;
new->prev = target;

if(target->next!=NULL) target->next->prev = new;
target->next = new;
}