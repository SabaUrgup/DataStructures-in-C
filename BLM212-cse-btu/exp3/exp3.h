typedef struct node
{
 void* dataPtr;
 struct node* link;
} NODE;
/* =================== createNode ====================
Creates a node in dynamic memory and stores data
pointer in it.
 Pre itemPtr is pointer to data to be stored.
 Post node created and its address returned.
*/
NODE* createNode (void* itemPtr)
{
NODE* nodePtr;
nodePtr = (NODE*) malloc (sizeof (NODE));
nodePtr->dataPtr = itemPtr;
nodePtr->link = NULL;
return nodePtr;
} // createNode 
