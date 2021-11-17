
/* Recursive C program to find length or count of nodes in a linked list;
***Recursive Solution
        int getCount(head)
        1) If head is NULL, return 0.
        2) Else return 1 + getCount(head->next)
Following are the Recursive implementation of the above algorithm to find the count of nodes in a given singly linked list
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* Linked list definition */
struct node {
    int data;
    struct node* link;
} *head;

void createList(int n){
    struct node *nodeNew, *temp;
    int data;

    head = (struct node *)malloc(sizeof(struct node));

    if(head == NULL){
        printf("***Memory could not be allocated!***");
    }else{
        head->data = data;
        head->link = NULL;
        temp = head;
        for(int i=0; i<=(n-2); i++)
        {
            nodeNew = (struct node *)malloc(sizeof(struct node));
                if(nodeNew == NULL){
                    printf("***Memory could not be allocated!***");
                    break;
                }else{
                    nodeNew->data = data;
                    nodeNew->link = NULL;
                    temp->link = nodeNew;
                    temp = temp->link;
                    }
        }
    }
}

/* Recursively count number of nodes in linked list */
int listLength(struct node * head)
{
     // Base case
    if(head == NULL){
        return 0;
    // Count this node plus the rest of the list
    }else{
        return 1 + listLength(head -> link);
    }
}

int main()
{
    int n;
    printf("\n Define the total number of nodes: ");
    scanf("%d", &n);
    printf(" Nodes are creating...");
    createList(n);
    sleep(1);
    printf("\n Linked List lenght is : %d.",listLength(head));
    return 0;
}
