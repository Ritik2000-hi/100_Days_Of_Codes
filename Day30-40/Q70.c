/*Q70: Rotate an array to the right by k positions.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/

#include <stdio.h>

int main() {
    int size;
    scanf("%d",&size);

    int array[size];
    for (int i=0 ; i<size ; i++){
        scanf("%d",&array[i]);
    }
    int position;
    scanf("%d",&position);
    position = position % size;

    for (int i=size-position ; i<size ; i++) {
        printf("%d ",array[i]);
    } 
    for (int j=0 ; j<size-position ; j++) {
        printf("%d ",array[j]);
    }


    return 0;
}