#include <stdio.h>

int isPrime(int number, int i) {
    if (number < 2)             //Base Case
        return 0;
    else if (i == 1)            //Base Case
        return 1;
    else if (number % i == 0 )      //Base Case
        return 0;
    return isPrime(number, i - 1);     //General Case
}


int main() {
    int number, prime;
    printf("Enter a positive integer : ");
    scanf("%d",&number);
    prime = isPrime(number, number/2);
    if (prime == 0){
        printf("%d is not a prime number. \n", number);
        return 0;
        }else{
            printf("%d is a prime number. \n", number);
            return 1;
            }
    return 0;
}
