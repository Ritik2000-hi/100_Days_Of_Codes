/*Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number*/

#include <stdio.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements (numbers between 0 and %d, with one missing):\n", n, n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int totalSum = n * (n + 1) / 2;  
    int arrSum = 0;

    for (int i = 0; i < n; i++) {
        arrSum += arr[i];
    }
    int missing = totalSum - arrSum;
    printf("The missing number is: %d\n", missing);
    return 0;
}