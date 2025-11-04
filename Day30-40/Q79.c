/*Q79: Perform diagonal traversal of a matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1: 
1 2 4 7 5 3 6 8 9

*/

#include <stdio.h>

int main() {
    int row,column;
    printf("Enter the size of row and column of matrix: ");
    scanf("%d %d",&row,&column);

    int matrix[row][column];
    printf("Enter elements in matrix: \n");
    for (int i=0 ; i<row ; i++) {
        for(int j=0 ; j<column ; j++) {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int k = 0; k < row; k++) {
        int i = 0, j = k;
        while(i < column && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
    }
    return 0;
}