/*Q72: Find the sum of all elements in a matrix.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/

#include <stdio.h>

int main() {
    int rows,columns;
    
    printf("Enter the number of rows: ");
    scanf("%d",&rows);

    printf("Enter the number of columns: ");
    scanf("%d",&columns);

    int matrix[rows][columns];
    int sum=0;
    for (int i=0 ; i<rows ; i++) {
        for (int j=0 ; j<columns ; j++) {
            scanf("%d",&matrix[i][j]);
            sum = sum + matrix[i][j];
        }
    }
    printf("Sum of all elements is %d\n", sum);
    return 0;
}