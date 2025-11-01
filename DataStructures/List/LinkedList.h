
#define LinkedList_c

#include <stdio.h>
#include "Node.h"

struct LinkedList
{
    // Linked list is a "collection" of nodes that point to eachother in order.
    // i.e., The fiurst node points to the second node. The second node points to third node etc.
    // The node head is the first node (index = 0) in the collection

    int length;
    struct Node* head;

    void (*insert)(void*, int, struct LinkedList);
    void (*remove)(int, struct LinkedList);
    void (*getData)(void*, int, struct LinkedList);

};

struct LinkedList LLConstructor();





