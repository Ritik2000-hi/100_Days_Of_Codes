/*Q65: Search in a sorted array using binary search.

Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/

#include <stdio.h>

int main() {
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);

    int array[size];
    printf("Enter elements in array [in sorted way]: ");
    for (int i=0 ; i<size ; i++) {
        scanf("%d",&array[i]);
    }
    int search;
    printf("Enter the element you want to search: ");
    scanf("%d",&search);

    int left=0, right=size-1, mid=(left + right)/2;
    while (left<=right) {
        int mid=(left + right)/2;
        if (search == array[mid]) {
            printf("Found at index %d",mid);
            break;
        }
        else if (search > array[mid]) {
            left=mid+1;
        }
        else {
            right=mid-1;
        }
    } if (left > right) {
        printf("-1");
    }
    return 0;
}