/*Q28: Write a program to print the product of even numbers from 1 to n.

Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/

#include <stdio.h>

int main() {
    int n,prod=1;
    printf("Enter the number: ");
    scanf("%d",&n);

    int i=2;
    while(i<=n) {
        prod*=i;
        i+=2;
    } printf("%d",prod);
    i=2;
    printf(" (");
    while (i<=n) {
        if (i<n) {
            printf("%d *",i);
        } else {
            printf("%d",i);
        }i+=2;
    }printf(")");
    return 0;
}