/*Q37: Write a program to find the LCM of two numbers.

Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/

#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1, &num2);

    for(int i= num1 ; i<= (num1 * num2); i++) { // Initialize i has num1 or num 2
        if ((i % num1 == 0) && (i % num2 == 0)) { // LCM of 2 numbers is always less than or equal to product of 2 numbers
            printf("%d",i);
            break;
        }
    }
    return 0;
}