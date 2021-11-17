/*
  C Program to check given string is palindrome or not using recursion
*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <unistd.h>

// A recursive function that check a input string is palindrome or not.
int isPalindrome(char *str, int leftIndex, int rightIndex);

// Driver Code
int main(){
    char str[100];
    printf("\n***Enter a string to find if it is a palindrome or not : ");
    gets(str);
    sleep(1);
    if(isPalindrome(str, 0, strlen(str) - 1)){
        printf("%s is a Palindrome \n", str);
    } else {
        printf("%s is not a Palindrome \n", str);
    }
    getch();
    return 0;
}

/*
 * Function to check whether a string is palindrome or not
 */
 int isPalindrome(char *str, int leftIndex, int rightIndex){

     /* Input Validation */
     if(NULL == str || leftIndex < 0 || rightIndex < 0){
         printf("Invalid Input \n");
         return 0;
     }
     /* Recursion termination condition */
     if(leftIndex >= rightIndex)
         return 1;
     if(str[leftIndex] == str[rightIndex]){
         return isPalindrome(str, leftIndex + 1, rightIndex - 1);
     }

    return 0;
 }
