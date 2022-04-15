#include <stdio.h>
#include <stdlib.h>
#include "exp3.h"

int main (void) {
    int* newData;
    int* nodeData;
    NODE* node;

    newData = (int*)malloc (sizeof (int));
    *newData = 7;
    node = createNode (newData);

    newData = (int*)malloc (sizeof (int));
    *newData = 75;
    node->link = createNode (newData);

    nodeData = (int*)node->dataPtr;
    printf ("Data from node: %d\n", *nodeData);

    nodeData = (int*)node->link->dataPtr;
    printf ("Data from node: %d\n", *nodeData);

    return 0;
}
