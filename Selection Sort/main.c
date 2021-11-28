#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10000
int main()
{
    int randomArray[N];
    srand(time(0));
    for(int i=0; i<N / sizeof(int); i++)
    {
    randomArray[i]=rand();

    }

    int temp;
    for(int k=0; k<N / sizeof(int); k++)
    {
        for(int j=0; j<N / sizeof(int); j++)
        {
            //If we looked at the code in Smallest to Largest order, the sign would be in the if statement: >
            if(randomArray[j]>randomArray[k])
            {
                temp=randomArray[k];
                randomArray[k]=randomArray[j];
                randomArray[j]=temp;
            }
        }

    }
    clock_t start, end;
    double cpu_time_used = 0.0;
    start = clock();
    selectionSort(randomArray, sizeof(randomArray) / sizeof(int) );
    end = clock();
    cpu_time_used += ((double) (end - start)) / CLOCKS_PER_SEC;
    printf ("The elapsed time is : %f seconds.", cpu_time_used);

    return 0;
}


void selectionSort(int array[],int order)
{
    int min,tmp;
    for(int i=0; i<order-1; i++)
    {
        min=i;
        for(int j=i+1; j <= order; j++)
        {
            if(array[j]<array[min])
            {
            min=j;
            }
        }
        tmp=array[i];
        array[i]=array[min];
        array[min]=tmp;
    }

}
