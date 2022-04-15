#include <stdio.h>
#include <stdlib.h>
#include "exp5.h"

int compare (void* ptr1, void* ptr2);

int main (void) {
    // Degiskenler
    float f1 = 73.4;
    float f2 = 81.7;
    float lrg;
    
    lrg = (*(float*) larger (&f1, &f2, compare));
    printf ("Larger value is: %5.1f\n", lrg);
    return 0;
}

/* ==================== compare ====================
 Pre ptr1 and ptr2 are pointers to integer values
 Post returns +1 if ptr1 >= ptr2
 returns -1 if ptr1 < ptr2
*/

int compare (void* ptr1, void* ptr2) {
    if (*(float*)ptr1 >= *(float*)ptr2)
        return 1;
    else
        return -1;
}
