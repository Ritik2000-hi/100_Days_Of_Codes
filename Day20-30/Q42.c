/*Q42: Write a program to check if a number is a perfect number.

Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/

#include <stdio.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    
    int i=1,digit=0;
    while (i<num) {
        if (num % i == 0) {
            digit = digit + i;
        } i++;
    } if (num == digit) {  // As num is become zero after the loop
        printf("Perfect number");
    } else {
        printf("Not a perfect number");
    } return 0;
}