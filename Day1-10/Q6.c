/*Q6: Write a program to swap two numbers using a third variable.

Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/

#include <stdio.h>

void main(){
    int num1,num2;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1, &num2);

    int temp; //temp is a temporary variable used to swap two numbers
    temp=num1;
    num1=num2;
    num2=temp;

    printf("After swap: %d %d",num1, num2);
}