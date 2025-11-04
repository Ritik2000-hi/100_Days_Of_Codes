/*Q57: Find the sum of array elements.

Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/

#include <stdio.h>

int main() {
     int size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    
    int array[size];
    int Sum=0;
    printf("Enter elements: ");
    for (int i=0 ; i<size ; i++){
        scanf("%d",&array[i]);
        Sum = Sum + array[i];
    }
    printf("Sum = %d",Sum);
    return 0;
}