/*Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.*/

#include <stdio.h>
int main() {
    int n, k;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements of the array:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the size of subarray k: ");
    scanf("%d", &k);

    if(k > n) {
        printf("Subarray size cannot be greater than array size.\n");
        return 0;
    }

    printf("First negative integers in each subarray of size %d: ", k);
    for(int i = 0; i <= n - k; i++) {
        int found = 0;  // flag to check if negative exists
        for(int j = i; j < i + k; j++) {
            if(arr[j] < 0) {
                printf("%d ", arr[j]);
                found = 1;
                break;  // first negative found, exit inner loop
            }
        }
        if(!found) {
            printf("0 ");
        }
    }
    printf("\n");
    return 0;
}