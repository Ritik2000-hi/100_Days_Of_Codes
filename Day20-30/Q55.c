/*Q55: Write a program to print all the prime numbers from 1 to n.

Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/

#include <stdio.h>

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d",&num);

    for (int i=2 ; i<=num ; i++) {
        int isPrime=1;
        for (int j=2 ; j<i ; j++) {
            if (i%j == 0) {
                isPrime=0;
                continue;
            } 
        } if (isPrime==1) {
            printf("%d ",i);
        }
    }
    return 0;
}