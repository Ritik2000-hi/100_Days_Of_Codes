/*Q56: Read and print elements of a one-dimensional array.

Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30

Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5

*/

#include <stdio.h>

int main() {
    int size;
    scanf("%d",&size);

    int array[size];
    for (int i=0 ; i<size ; i++) {
        scanf("%d",&array[i]);
    } printf("Output:\n");
    for (int j=0 ; j<size ; j++) {
        printf("%d ",array[j]);
    }
    return 0;
}