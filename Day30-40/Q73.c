/*73: Find the sum of each row of a matrix and store it in an array.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/

#include <stdio.h>

int main() {
    int rows,columns;
    scanf("%d",&rows);
    scanf("%d",&columns);

    int matrix[rows][columns];
    int array[rows];
    for (int i=0 ; i<rows ; i++) {
        array[i]=0;
        for (int j=0 ; j<columns ; j++) {
            scanf("%d",&matrix[i][j]);
            array[i] = array[i] + matrix[i][j];
        }
    }

    for (int i=0 ; i<rows ; i++) {
        printf("%d ",array[i]);
    }
    return 0;
}