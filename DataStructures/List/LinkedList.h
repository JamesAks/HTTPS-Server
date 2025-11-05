
#include <stdio.h>
#include <stdlib.h>
#include "Node.h"

struct LinkedList
{
    // Linked list is a "collection" of nodes that point to eachother in order.
    // i.e., The fiurst node points to the second node. The second node points to third node etc.
    // The node head is the first node (index = 0) in the collection

    int length;
    struct Node* head;

    // Method for inserting node into Linked List
    void (*insert)(void*, int, struct LinkedList*);

    // Method for removing node from Linked List
    void (*removeNode)(int, struct LinkedList*);

    // Method for retrieving data from linked List
    void* (*getData)(int, struct LinkedList*);

};

// A LinkedList struct is always returned therefore its stack allocated
struct LinkedList LLConstructor();

// Allows for stack and heap allocation
void linkedListInit(struct LinkedList*);







