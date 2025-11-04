/*Q61: Search for an element in an array using linear search.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/

#include <stdio.h>

int main() {
    int size;
    scanf("%d",&size);

    int array[size];
    for (int i=0 ; i<size ; i++) {
        scanf("%d",&array[i]);
    }
    int search,found=0;
    scanf("%d",&search);
    for(int i=0 ; i<size ; i++) {
        if (array[i] == search) {
            found = 1;
            printf("\nFound at index %d",i);
            break;
        }
    } if (found == 0) {
        printf("\n-1");
    }
    return 0;
}