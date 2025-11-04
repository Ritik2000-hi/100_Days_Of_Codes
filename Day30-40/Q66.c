/*Q66: Insert an element in a sorted array at the appropriate position.

Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/

#include <stdio.h>

int main() {
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);

    int array[size+1];
    printf("Enter elements in sorted order: ");
    for (int i=0 ; i<size ; i++) {
          scanf("%d",&array[i]);
    }
    int insert;
    printf("Enter the element you want to insert: ");
    scanf("%d",&insert);

    for (int j=0 ; j<size+1 ; j++) {
        if (insert < array[j]) {
            for(int k=size+1 ; k>j ; k--) {
                array[k-1]=array[k-2];
            }
            array[j] = insert;
            break;
        }
    } printf("\nNew Array is ");
    for (int i=0 ; i<size+1 ; i++ ) {
        printf("%d ",array[i]);
    }
    return 0;
}