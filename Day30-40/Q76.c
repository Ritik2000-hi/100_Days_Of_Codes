/*Q76: Check if a matrix is symmetric.

Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/

#include <stdio.h>

int main() {
    int row,column;
    printf("Enter row and column size of matrix: ");
    scanf("%d %d",&row,&column);

    int matrix[row][column];
   
    printf("Enter elements of matrix:\n");
    for (int i=0 ; i<row ; i++) {
        for (int j=0 ; j<column ; j++) {
            scanf("%d",&matrix[i][j]);
        }
    }
    int is_symmetric;
    for (int i=0 ; i<row ; i++) {
        for (int j=0 ; j<column ; j++) {
            if (matrix[i][j] == matrix[j][i]) {
                is_symmetric=1;
            } else {
                is_symmetric=0;
                break;
            }
        }
    } if (is_symmetric) {
        printf("True");
    } else {
        printf("False");
    }
    return 0;
}