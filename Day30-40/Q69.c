/*Q69: Find the second largest element in an array.

Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/

#include <stdio.h>

int main() {
    int size;
    scanf("%d",&size);

    int array[size];
    int largest=array[0],second_largest=array[0];
    for (int i=0; i<size ; i++) {
        scanf("%d",&array[i]);
        if (array[i] > largest) {
            second_largest=largest;
            largest=array[i];
        }
        else if (array[i] > second_largest && array[i]<largest) {
            second_largest=array[i];
        }
    } printf("%d",second_largest);
    return 0;
}