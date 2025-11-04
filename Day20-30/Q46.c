/*Q46: Write a program to print the following pattern:
*****
*****
*****
*****
*****

Sample Test Cases:
Input 1:

Output 1:
*****
*****
*****
*****
*****

*/

#include <stdio.h>

int main(){
    int num=5;

    for (int i=1 ; i<=num ; i++) {
        for (int j=1 ; j<=num ; j++) {
            printf("*");
        }printf("\n");
    }
    return 0;
}