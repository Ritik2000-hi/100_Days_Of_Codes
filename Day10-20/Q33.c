/*Q33: Write a program to check if a number is an Armstrong number.

Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include <stdio.h>
#include <math.h>

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d",&num);

    int original=num;
    int count=0,temp=num;

    while (temp > 0) {
        count++;
        temp = temp /10;
    }
    int sum=0,digit;
    while(num>0) {
        digit = num % 10;
        sum = sum + (pow(digit,count));
        num = num/10;
    } if (original==sum) {
        printf("Armstrong");
    } else {
        printf("Not Armstrong");
    }
    return 0;
}