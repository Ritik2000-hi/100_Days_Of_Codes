/*Q75: Add two matrices.

Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/

#include <stdio.h>

int main() {
    int row1,column1;
    printf("Enter rows and columns size for matrix 1: ");
    scanf("%d %d",&row1,&column1);
    printf("Enter elements of matrix 1:\n");
    int matrix1[row1][column1];
    for(int i=0 ; i<row1 ; i++) {
        for (int j=0 ; j<column1 ; j++) {
            scanf("%d",&matrix1[i][j]);
        }
    }
    int row2,column2;
    printf("Enter rows and columns size for matrix 2: ");
    scanf("%d %d",&row2,&column2);
    printf("Enter elements of matrix 2:\n");
    int matrix2[row2][column2];
    for(int i=0 ; i<row2 ; i++) {
        for (int j=0 ; j<column2 ; j++) {
            scanf("%d",&matrix2[i][j]);
        }
    } printf("Addition of 2 matrix is \n");

    for(int i=0 ; i<row1 ; i++) {
        for (int j=0 ; j<column1 ; j++) {
            printf("%d ",matrix1[i][j] + matrix2[i][j]);
        }printf("\n");
    }
    return 0;
}