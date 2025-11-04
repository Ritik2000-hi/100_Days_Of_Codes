/*Q78: Find the sum of main diagonal elements for a square matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/

#include <stdio.h>

int main() {
    int row,column;
    printf("Enter row and column size of matrix: ");
    scanf("%d %d",&row,&column);

    int matrix[row][column];
    int sum=0;
   
    printf("Enter elements of matrix:\n");
    for (int i=0 ; i<row ; i++) {
        for (int j=0 ; j<column ; j++) {
            scanf("%d",&matrix[i][j]);
            if (i==j) {
                sum+=matrix[i][i];
            }
        }
    } printf("\n%d",sum);

    return 0;
}