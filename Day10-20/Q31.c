/*Q31: Write a program to take a number as input and print its equivalent binary representation.

Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/

#include <stdio.h>

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    
    int place=1,binary=0;
    while(num>0) {
        int rem = num % 2;
        binary = (rem * place) + binary;
        num = num/2;
        place = place * 10;
    } printf("%d",binary);
    return 0;
}