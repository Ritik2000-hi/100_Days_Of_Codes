/*Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.*/

#include <stdio.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (numbers between 1 and %d with one repeated):\n", n, n - 1);

    int arrSum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        arrSum += arr[i];  
    }

    int expectedSum = (n - 1) * n / 2; 
    int repeated = arrSum - expectedSum;
    printf("The repeated element is: %d\n", repeated);
    return 0;
}