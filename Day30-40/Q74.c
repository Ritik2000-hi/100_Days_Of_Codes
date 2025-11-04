/*Q74: Find the transpose of a matrix.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/

#include <stdio.h>

int main() {
    int rows,columns;
    scanf("%d",&rows);
    scanf("%d",&columns);

    int matrix[rows][columns];
    for (int i=0 ; i<rows ; i++) {
        for (int j=0 ; j<columns ; j++) {
            scanf("%d",&matrix[i][j]);
            
        }
    }printf("\n");
    for (int i=0 ; i<columns ; i++) {
        for (int j=0 ; j<rows ; j++) {
            printf("%d ",matrix[j][i]);
        }printf("\n");
    }
    return 0;
}