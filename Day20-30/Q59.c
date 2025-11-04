/*Q59: Count even and odd numbers in an array.

Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);

    int array[n];
    int count_even=0;
    int count_odd=0;

    for (int i=0 ; i<n ; i++) {
        scanf("%d",&array[i]);
        if (array[i] % 2 == 0) {
            count_even++;
        } else {
            count_odd++;
        }
    } printf("Even=%d, Odd=%d",count_even,count_odd);
    return 0;
}