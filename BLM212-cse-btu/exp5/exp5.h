typedef struct node {
    void* dataPtr;
    struct node* link;
} NODE;
/* =================== createNode ====================
Creates a node in dynamic memory and stores data
pointer in it.
 Pre itemPtr is pointer to data to be stored.
 Post node created and its address returned.
*/
NODE* createNode (void* itemPtr) {
    NODE* nodePtr;
    nodePtr = (NODE*) malloc (sizeof (NODE));
    nodePtr->dataPtr = itemPtr;
    nodePtr->link = NULL;
    return nodePtr;
}

// Pre data1, data2, comparisonFunction Post void pointer
void* larger (void* dataPtr1, void* dataPtr2, int (*ptrToCmpFun)(void*, void*)) {
    if ((*ptrToCmpFun) (dataPtr1, dataPtr2) > 0)
        return dataPtr1;
    else
        return dataPtr2;
}
