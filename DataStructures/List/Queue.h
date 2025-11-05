#include "LinkedList.h"

struct Queue
{

    // A queue is a First In First Out (FIFO) list.
    struct LinkedList linked_list;

    int length;

    // Method adds data to the tail of the the list.
    void (*enqueue)(void*, struct Queue*);

    // Deletes the head from the list.
    void (*dequeue)(struct Queue*);

    // Gets the data in the head of the list.
    void* (*peek)(struct Queue*);

    // Returns the length of the queue.
    int (*len)(struct Queue*);




};

// Initilaise the Queue fields
void queueInit(struct Queue*);


