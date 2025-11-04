/*Q43: Write a program to check if a number is a strong number.

Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include <stdio.h>

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d",&num);

    int digit,fact=1,sum=0;
    int original = num;
    while (num>0) {
        digit= num % 10;
        for(int i=1; i<=digit; i++) {
            fact*=i;
        } sum+=fact;
        fact=1;
        num = num / 10;
    } if(original == sum) {
        printf("Strong number");
    } else{
        printf("Not a strong number");
    }
    return 0;
}