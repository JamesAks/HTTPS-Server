#include "LinkedList.h"

struct Node* createNode(void*);
struct Node* iter(int, struct LinkedList*);
void insert(void*, int, struct LinkedList*);
void removeNode(int, struct LinkedList*);
void* getData(int, struct LinkedList*);

struct LinkedList LLConstructor(){

    // Constructs the linked list with the initial values
    struct LinkedList new_linked_list;

    new_linked_list.head = NULL;
    new_linked_list.length = 0;

    new_linked_list.insert = &insert; 
    new_linked_list.removeNode = &removeNode;
    new_linked_list.getData = &getData;

    return new_linked_list;
    
}

void linkedListInit(struct LinkedList* linked_list){

    // Constructs the linked list with the initial values
    linked_list->head = NULL;
    linked_list->length = 0;

    linked_list->insert = &insert; 
    linked_list->removeNode = &removeNode;
    linked_list->getData = &getData;

}

struct Node* createNode(void* data){

    // Allocating memory and memory address for new node instance.
    struct Node* node_address = (struct Node*)malloc(sizeof(struct Node)) ;
    struct Node new_node;

    // Derefeerencing the address
    *node_address = new_node;
    nodeInit(node_address, data);

    return node_address;
}

struct Node* iter(int index, struct LinkedList* linked_list){

    // This function handles moving through the nodes in the linked list (iterating).
    if (index >= linked_list->length || index < 0){

        // Error if the index is too large.
        printf("Index of %d is out of bounds", index);
        exit(-1);
        //exit
    };

    struct Node* cursor = linked_list->head;

    for ( int i = 0; i < index; i++){

        cursor = cursor->nextNode;
    };

    return cursor;

};

void insert(void* data, int index, struct LinkedList* linked_list ){
    
    struct Node* new_node = createNode(data);

    if (index == 0){
        
        // If the new node is at the beginning of the list it becomes the new head points to the old head.
        new_node->nextNode = linked_list->head;
        linked_list->head = new_node;

    } else {

        struct Node* cursor = iter((index - 1), linked_list);

        // To insert a node, the node  before the new node's index needs to point to thw new node.
        // And the new node needs to point to where the node before it pointed.
        new_node->nextNode = cursor->nextNode;
        cursor->nextNode = new_node; 

    };

    linked_list->length++;
    
};

void removeNode(int index, struct LinkedList* linked_list){

    if (index == 0){

        // If the index is 0 then the head of the linked list beocomes the node that the head currently points to.
        // The memory the prvious head took up can then be freed
        struct Node* removed = linked_list->head;
        linked_list->head = linked_list->head->nextNode; 

        destroyNode(removed);

    } else {

    // To remove a node, the node before it needs to point to the node it pointed to.
    // After the memory that node took up is freed
    struct Node* cursor = iter((index - 1), linked_list);
    struct Node* removed = cursor->nextNode;
    cursor->nextNode = removed->nextNode;
    destroyNode(removed);
    };

    linked_list->length--;

};

void* getData(int index, struct LinkedList* linked_list){

    if (index == 0){
        // If index is zero return "data" field of the head
        return linked_list->head->data;

    } else {

        struct Node* cursor = iter(index, linked_list);

        // Cursor now moves to the index of the node rather than the index of the node before.
        return cursor->data;

    };

};


