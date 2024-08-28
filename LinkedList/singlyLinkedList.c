#include <stdio.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* createNode(int data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory error\n");
        return NULL;
    }
    newNode->data = data;
    return newNode;
};

void insertAtFront(struct Node** start, int data){
    struct Node* newNode = createNode(data);
    if (!newNode){
        printf("Memory error\n");
        return;
    }
    newNode->next = *start;
    *start = newNode;
}

void printList(struct Node* start){
    if(start == NULL){
        printf("List is empty\n");
        return;
    }
    struct Node* t = start;
    while (t!= NULL) {
        printf(" %d ", t->data);
        t = t->next;
    }
}

int main(int argc, char const *argv[])
{
    printf("\nHello, world!");
    return 0;
}
