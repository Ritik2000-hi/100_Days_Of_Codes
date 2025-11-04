/*Q32: Write a program to check if a number is a palindrome.

Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include <stdio.h>

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    
    int original=num;
    int digit,reverse=0;
    while(num > 0) {
        digit = num % 10;
        reverse = (reverse * 10) + digit;
        num = num/10;
    } if (original == reverse) {
        printf("Palindrome");
    } else {
        printf("Not a palindrome");
    }
    return 0;
}