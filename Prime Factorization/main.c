
//Prime factorization implementation

#include <stdio.h>
#include <stdlib.h>

// A recursive function that factorizes a prime number.
int factorization(int number)
{
    int x = 2;
    if(number==1)
        return 0;
    while(number%x != 0)
        x++;
    printf("%d ", x);
    return factorization(number/x);
}

// Driver Code
int main()
{
    int tester[5]= {16, 18, 29, 111, 360};
    for(int i=0; i<5; i++)
    {
        printf(" The factors of %d. tester are :  ",i+1);
        factorization(tester[i]);
        printf("\n\n");
    }
    return 0;
}
