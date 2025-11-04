/*Q80: Multiply two matrices.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/

#include <stdio.h>

int main() {
    int row1,column1;
    printf("Enter the size of row and column of matrix1: ");
    scanf("%d %d",&row1,&column1);

    int matrix1[row1][column1];
    printf("Enter elements in matrix1: \n");
    for (int i=0 ; i<row1 ; i++) {
        for(int j=0 ; j<column1 ; j++) {
            scanf("%d",&matrix1[i][j]);
        }
    }
    int row2,column2;
    printf("Enter the size of row and column of matrix2: ");
    scanf("%d %d",&row2,&column2);

    int matrix2[row2][column2];
    printf("Enter elements in matrix2: \n");
    for (int i=0 ; i<row2 ; i++) {
        for(int j=0 ; j<column2 ; j++) {
            scanf("%d",&matrix2[i][j]);
        }
    } printf("\n");
    // For matrix multiplication
    for (int k=0 ; k<row1 ;k++) {
        for(int l=0 ; l<column2 ; l++) {
            int value=0;
            for (int m=0 ; m<column1 ; m++) {
                value= value + matrix1[k][m] * matrix2[m][l];
            }printf("%d ",value);
        }printf("\n");
    }

}