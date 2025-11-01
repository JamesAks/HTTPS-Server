#include <stdio.h>

struct Node 
{
    // Nodes only hold their data and the memory address to the next item in the heap.

        void* data;
        struct Node* nextNode;

      
};