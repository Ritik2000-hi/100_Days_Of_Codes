/*77: Check if the elements on the diagonal of a matrix are distinct.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/

#include <stdio.h>

int main() {
    int row, column;
    printf("Enter row and column size of matrix: ");
    scanf("%d %d", &row, &column);
    
    int matrix[row][column];
    printf("Enter elements of matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // To store diagonal elements we’ll use an array
    int diagonal[1000]={0};  
    int size = 0;

    for (int i = 0; i < row && i < column; i++) {
        int value = matrix[i][i];
        // check if already exists
        for (int k = 0; k < size; k++) {
            if (diagonal[k] == value) {
                printf("False");
                return 0;
            }
        }
        diagonal[size++] = value;
    }

    printf("True");
    return 0;
}