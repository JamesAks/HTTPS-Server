#include "Node.h"
#include <stdio.h>
#include <stdlib.h>

void nodeInit(struct Node* node, void* data){

    node->data = data;
    node->nextNode = NULL;

}

void destroyNode(struct Node* node_to_destroy){

    free(node_to_destroy->data);
    free(node_to_destroy);
    
}

