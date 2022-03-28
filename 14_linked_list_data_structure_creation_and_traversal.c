#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node* ptr){
    while (ptr!=NULL)
    {
    printf("Element: %d\n", ptr->data);
    ptr = ptr->next;
    }
    
}
int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * forth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    forth = (struct Node*)malloc(sizeof(struct Node));

    // Link first and second Node
    head->data = 34;
    head->next = second;

    // Link second and third Node
    second->data = 45;
    second->next = third;

    // Link third and forth Node
    third->data = 56;
    third->next = forth;

    // Terminate the list at the third node
    forth->data = 98;
    forth->next = NULL;
 
    linkedListTraversal(head);

    return 0;
}

// head = (struct Node*)malloc(sizeof(struct Node))

