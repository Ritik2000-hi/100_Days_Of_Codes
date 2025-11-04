/*Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

Sample Test Cases:
Input 1:
arr = [1, 2, 8, 10, 11, 12, 19], x = 5
Output 1:
2

Input 2:
arr = [1, 2, 8, 10, 11, 12, 19], x = 20
Output 2:
-1

Input 3:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 0
Output 3:
0

Input 4:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 2
Output 4:
2

*/

#include <stdio.h>

int main() {
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter elements in sorted way: ");
    for (int i=0 ; i<size ; i++ ) {
        scanf("%d",&arr[i]);
    }
    int x,ceil_of_x=arr[0];
    int found=0;
    printf("\nx = ");
    scanf("%d",&x);

    for (int i=0 ; i<size ; i++) { //To put ceil_of_x as largest element of array
        if (arr[i]>ceil_of_x) {
            ceil_of_x=arr[i];
        }
    }
    for (int i=0 ; i<size ; i++) {
        if (arr[i]>=x && arr[i]<=ceil_of_x) {
            ceil_of_x=arr[i];
        }
    }
    for (int i=0 ; i<size ; i++ ) { 
        if (arr[i] == ceil_of_x) {
            printf("%d",i);
            found=1;
            break;
        }
    }
    if (found == 0) {
        printf("%d",-1);
    }
    return 0;
}