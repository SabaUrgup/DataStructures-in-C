typedef struct node
{
    char name[20],surname[20],department[40];
    int nu, grade;
    struct node* next;
    struct node* prev;
} node;

typedef struct
{
    node* root;

} List;

List* createLinkedList(List* liste)
{
    if(liste!=NULL)
    {
        printf("List Already Exists! \n\n\n");
        return liste;
    }
    liste=(List*)malloc(sizeof(List));
    liste->root=NULL;
    printf("List Created! \n\n\n");
    return liste;

}

void addNode(List* liste)
{

    if(liste==NULL)
    {
        printf("List not found! \n\n\n");
        return 0;
    }
    node* temp=(node*)malloc(sizeof(node));
    if (!temp)
    {
        printf("Failed to allocate memory! \n\n\n");
        exit(-1);
    }
    printf("Enter student number: ");
    scanf("%d",&temp->nu);
    printf("Enter student's name: ");
    scanf("%s",&temp->name);
    printf("Enter student's surname: ");
    scanf("%s",&temp->surname);
    printf("Enter student's class: ");
    scanf("%d",&temp->grade);
    printf("Enter student's department: ");
    scanf("%s",&temp->department);

    node* iter=liste->root;
    if(iter!=NULL)
    {
        iter->next=temp;
        temp->prev=iter;
        temp->next=NULL;
        printf("Student added to list! \n\n\n");

    }
    else
    {
        liste->root=(node*)malloc(sizeof(node));
        liste->root=temp;
        temp->prev=NULL;
        temp->next=NULL;
        printf("Student added to list! \n\n\n");

    }
}

List* deleteNode(List* liste)
{
    if(liste==NULL)
    {
        printf("List not found! \n\n\n");
        return liste;
    }
    if(liste->root==NULL)
    {
        printf("No student found in the list! \n\n\n");
        return liste;
    }
    printf("Enter the number of the student you want to delete: ");
    int number;
    scanf("%d",&number);
    node* iter=liste->root;
    while(iter!=NULL)
    {

        if(iter->nu == number)
        {
            //if the node is in between
            if(iter->prev!=NULL && iter->next!=NULL)
            {
                iter->prev->next=iter->next;
                iter->next->prev=iter->prev;
                free(iter);
                printf("Student Deleted! \n\n\n");
                return liste;
            }
            //if the node is first
            else if(iter->prev==NULL)
            {
                if(iter->next!=NULL) // check if the list is single element
                {
                    iter->next->prev=NULL;
                    liste->root=iter->next;
                    free(iter);
                    printf("Student Deleted! \n\n\n");
                    return liste;
                }
                else
                    liste->root=NULL;
                printf("The student Deleted! \n\n\n");
                return liste;

            }
            else //if it is the last element
            {
                iter->prev->next=NULL;
                free(iter);
                printf("The student deleted! \n\n\n");
                return liste;
            }

            break;
        }
        iter=iter->next;
    }

}

void searchNode(List* liste)
{
    if(liste==NULL)
    {
        printf("List not found! \n\n\n");
        return 0;
    }
    else if(liste->root==NULL)
    {
        printf("No student found in the list! \n\n\n");
        return liste;
    }
    else
    {
        printf("Enter the number of the student you are looking for: ");
        int number;
        scanf("%d",&number);
        node* iter=liste->root;
        while(iter!=NULL)
        {
            if(iter->nu == number)
            {
                printf("The student whose number is entered; \nName:%s \nSurname:%s \nClass:%d \nDepartment:%s \n\n\n",iter->name,iter->surname,iter->grade,iter->department);
                break;
            }
            iter=iter->next;
        }
        if(iter==NULL)
        {
            printf("The student you are looking for could not be found! \n\n\n");
        }
    }
}


void displayList (List* liste)
{
    if(liste==NULL)
    {
        printf("List not found! \n\n\n");
        return 0;
    }
    else if(liste->root==NULL)
        {
        printf("No student found in the list! \n\n\n");
        return liste;
        }
    else
      {
        node* iter=liste->root;
        while(iter != NULL)
        {
            printf(" Student's; \nNumber: %d\nName: %s\nSurname: %s\nClass: %d\nDepartment:%s \n\n\n",iter->nu, iter->name,iter->surname,iter->grade,iter->department);
            iter=iter->next;
        }
      }
}


node* destroyLinkedList(List* liste)
{
    if(liste==NULL)
    {
        printf("List not found! \n\n\n");
        return liste;
    }
    else{
        node* iter=liste->root;
        while(iter!=NULL)
        {
            node* temp=iter;
            iter=iter->next;
            free(temp);
        }
        free(iter);
        free(liste);
        printf("The list deleted! \n\n\n");
        return NULL;
    }
}
