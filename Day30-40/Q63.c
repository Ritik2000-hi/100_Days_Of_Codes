/*Q63: Merge two arrays.

Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/

#include <stdio.h>

int main() {
    int size1;
    scanf("%d",&size1);

    int array1[size1];
    for (int i=0 ; i<size1 ; i++) {
        scanf("%d",&array1[i]);
    }

    int size2;
    scanf("%d",&size2);

    int array2[size2];
    for (int j=0 ; j<size2 ; j++) {
        scanf("%d",&array2[j]);
    }

    int array[size1+size2];
    for (int k=0 ; k<size1 ; k++) {
        array[k]=array1[k];
    }
    for (int l=0 ; l<size2 ; l++) {
        array[size1+l]=array2[l];
    } printf("\n");

    for (int i=0 ; i<size1+size2 ; i++) {
        printf("%d ",array[i]);
    }
    return 0;
}