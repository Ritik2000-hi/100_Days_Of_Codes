/*Q41: Write a program to swap the first and last digit of a number.

Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>

int main() {
    int num, n, first, last, swapped, place = 1;
    printf("Enter number: ");
    scanf("%d", &num);

    n = num;
    last = n % 10;
    
    while (n >= 10) { // Find first digit and place value of last digit
        n /= 10;
        place *= 10;
    }
    first = n;

    if (place == 1) {  // Swap only if number has more than 1 digit
        printf("%d\n", num);
        return 0;
    }

    // Build swapped number
    swapped = (num % place);       // remove first digit
    swapped = swapped / 10;        // remove last digit
    swapped = last * place + swapped * 10 + first;

    printf("%d\n", swapped);

    return 0;
}