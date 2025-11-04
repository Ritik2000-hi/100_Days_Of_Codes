/*Q68: Delete an element from an array.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/

#include <stdio.h>

int main() {
    int size;
    scanf("%d",&size);

    int array[size];
    for (int i=0 ; i<size ; i++) {
        scanf("%d",&array[i]);
    }
    int index;
    scanf("%d",&index);

    for (int i=index ; i<size ; i++) {
        array[i]=array[i+1];
    }

    for(int i=0 ; i<(size-1); i++) {
        printf("%d ",array[i]);
    }
    return 0;
}