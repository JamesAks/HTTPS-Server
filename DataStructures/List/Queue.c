#include "Queue.h"

void enqueue(void*, struct Queue*);
void dequeue(struct Queue*);
void* peek(struct Queue*);
int len(struct Queue*);

void queueInit(struct Queue* queue){

    struct LinkedList linked_list;
    linkedListInit(&linked_list);

    queue->linked_list = linked_list;
    queue->enqueue = &enqueue;
    queue->dequeue = &dequeue;
    queue->peek = &peek;
    queue->len = &len;

}

void enqueue(void* data, struct Queue* queue){

     queue->linked_list.insert(data, queue->linked_list.length, &queue->linked_list);
    
}

void dequeue(struct Queue* queue){

    queue->linked_list.removeNode(0, &queue->linked_list);

}

void* peek(struct Queue* queue){

    void* data = queue->linked_list.head->data;

    return data;

}

int len(struct Queue* queue){

    return queue->linked_list.length;

};

