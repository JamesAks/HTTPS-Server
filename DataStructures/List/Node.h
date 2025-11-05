
struct Node 
{
    // Nodes only hold their data and the memory address to the next item in the heap.

        void* data;
        struct Node* nextNode;

};

// Initialises Node
void nodeInit(struct Node*, void*);

// Method for freeing the node and the data from memory.
void destroyNode(struct Node*);

