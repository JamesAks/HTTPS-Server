
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

    void (*insert)(void*, int, struct LinkedList*);
    void (*removeNode)(int, struct LinkedList*);
    void* (*getData)(int, struct LinkedList*);

};

// A LinkedList struct is always returned therefore its stack allocated
struct LinkedList LLConstructor();

// Allows for stack and heap allocation
void linkedListInit(struct LinkedList*);







