// Your code here...
// 
#include<stdio.h>

int main() {
    int num;

    // Ask the user to input a number
   
    scanf("%d", &num);

    // Check if the number is less than 2 (not prime)
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
    }
    // Check if the number is 2 (the smallest prime number)
    else if (num == 2) {
        printf("%d is a prime number.\n", num);
    }
    // Check if the number is even (except 2, no other even number is prime)
    else if (num % 2 == 0) {
        printf("%d is not a prime number.\n", num);
    }
    // Check divisibility by 3 (since 3 is the next smallest prime)
    else if (num % 3 == 0) {
        printf("%d is not a prime number.\n", num);
    }
    // Check divisibility by 5 (since 5 is another prime number)
    else if (num % 5 == 0) {
        printf("%d is not a prime number.\n", num);
    }
    // Check divisibility by 7 (next prime after 5)
    else if (num % 7 == 0) {
        printf("%d is not a prime number.\n", num);
    }
    // If none of the conditions above are true, the number is prime
    else {
        printf("%d is a prime number.\n", num);
    }

    return 0;
}
