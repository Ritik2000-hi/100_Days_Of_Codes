/*Q71: Read and print a matrix.


Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/

#include <stdio.h>

int main() {
    int rows,columns;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);

    printf("Enter the number of columns: ");
    scanf("%d",&columns);

    int matrix[rows][columns];
    for (int i=0 ; i<rows ; i++) {
        for (int j=0 ; j<columns ; j++) {
            scanf("%d",&matrix[i][j]);
        }
    }

    for (int i=0 ; i<rows ; i++) {
        for (int j=0 ; j<columns ; j++) {
            printf("%d ",matrix[i][j]);
        } printf("\n");
    }

    return 0;
}