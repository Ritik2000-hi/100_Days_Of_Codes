/*Q62: Reverse an array without taking extra space.

Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/

#include <stdio.h>

int main() {
    int size;
    scanf("%d",&size);

    int array[size];
    for (int i=0 ; i<size ; i++) {
        scanf("%d",&array[i]);
    } printf("\n");

    for (int j=(size-1) ; j>=0 ; j--) {
        printf("%d ",array[j]);
    }
    return 0;
}