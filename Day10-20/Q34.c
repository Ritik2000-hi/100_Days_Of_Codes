/*Q34: Write a program to check if a number is prime.

Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/

#include <stdio.h>

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    int isPrime = 1;  // assume prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    } if (isPrime) {
        printf("Prime");
    } else {
        printf("Not prime");
    }
    return 0;
}