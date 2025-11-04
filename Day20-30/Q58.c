/*Q58: Find the maximum and minimum element in an array.

Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/

#include <stdio.h>

int main() {
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    
    int array[size];
    printf("Enter elements: ");
    for (int i=0 ; i<size ; i++){
        scanf("%d",&array[i]);
    }
    
    int Max=array[0],Min=array[0];
    for (int j=0 ; j<size ; j++) {
        if (array[j] > Max) {
            Max=array[j];
        } if (array[j] < Min) {
            Min=array[j];
        }
    } 
    printf("Max=%d, Min=%d",Max,Min);
    return 0;
}