/*Q30: Write a program to reverse a given number.

Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/

#include <stdio.h>

int main() {
    int num;
    printf("Enter your number: ");
    scanf("%d",&num);
    
    int digit,reverse=0;

    while(num>0) {
        digit=num % 10;
        reverse = (reverse * 10) + digit;
        num = num/10;
    }printf("%d",reverse);
    return 0;
}