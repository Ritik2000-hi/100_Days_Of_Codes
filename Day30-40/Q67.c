/*Q67: Insert an element in an array at a given position.

Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/

#include <stdio.h>

int main() {
    int size;
    scanf("%d",&size);

    int array[size+1];
    for (int i=0 ; i<size ; i++) {
        scanf("%d",&array[i]);
    }
    int index,element;
    scanf("%d",&index);
    scanf("%d",&element);

    for (int i= size ; i>=index ; i--) {
        array[i+1]=array[i];
    } array[index]=element;

    for (int i=0 ; i<(size+1) ; i++) {
        printf("%d ",array[i]);
    }

    return 0;
}