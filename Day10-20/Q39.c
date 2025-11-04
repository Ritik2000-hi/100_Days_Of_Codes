/*Q39: Write a program to find the product of odd digits of a number.

Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/

#include <stdio.h>

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d",&num);

    int digit,product=1,isOdd=0;
    int original = num;
    while(num>0) {
        digit = num % 10;
        if (digit % 2 != 0) {
            product = product * digit;
            isOdd=1;
        } num = num / 10;
    } if (isOdd == 0) {
        printf("1 (No odd digits, assume 1)");
    } else {
        printf ("%d",product);
        printf(" (");
        int rev=0, temp = original;
        while (temp > 0) { // Reverse the number first
            rev = rev * 10 + (temp % 10);
            temp /= 10;
        }
        int first = 1;
        while (rev > 0) {
            digit = rev % 10;
            if (digit % 2 != 0) {
                if (!first) printf("*");
                printf("%d", digit);
                first = 0;
            }rev /= 10;
        }printf(")");
    }return 0;
}