/*
Saba ÜRGÜP 19360859039 - BLM212 Veri Yapýlarý Ödev 3: Linear List
*/

#include <stdio.h>
#include <stdlib.h>
#include "head.h"
#include <locale.h>

int main()
{
    List* list = NULL;

    while(1)
    {
        printf("  Select the action you want to do: \n1-Create Linked List \n2-Traverse List \n3-Destroy linked list \n4-Add New Student to List \n5-Delete a Student \n6-Find a Student \n7-Exit \n" );
        int selection;
        scanf("%d",&selection);
        if(selection<=0 || selection>7){
            printf("Invalid number!");
            exit(0);
        }
        switch(selection)
        {
        case 1:
            list=createLinkedList(list);
            break;
        case 2:
            displayList(list);
            break;
        case 3:
            list=destroyLinkedList(list);
            break;
        case 4:
            addNode(list);
            break;
        case 5:
            list=deleteNode(list);
            break;
        case 6:
            searchNode(list);
            break;
        case 7:
            exit(0);
            break;
        }
    }

    return 0;
}
