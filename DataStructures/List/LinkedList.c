#include <stdio.h>
#include "LinkedList.h"

void insert(void*, int, struct LinkedList);
void remove(int, struct LinkedList);
void getData(int, struct LinkedList);
struct Node* createNode(void*);

void insert(void* data, int index, struct LinkedList* linked_list ){


};

void remove(int index, struct LinkedList* linked_list){};
void get_data(int index, struct LinkedList* linked_list){};

struct LinkedList LLConstructor()
{
    struct LinkedList new_linked_list;

    new_linked_list.head = NULL;
    new_linked_list.length = 0;

    new_linked_list.insert = &insert;
    

    
};
