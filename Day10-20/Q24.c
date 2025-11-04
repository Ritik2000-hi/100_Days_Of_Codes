/*Q24: Write a program to calculate an electricity bill based on units consumed.

Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹950

Input 3:
250
Output 3:
Bill: ₹2200
*/
/* 1-100 Units: ₹5 per unit
101-200 Units : ₹9 per unit
201-300 Units : ₹16 per unit 
 */

#include <stdio.h>

int main() {
    int units;
    printf("Enter no. of units consumed: ");
    scanf("%d",&units);

    if (units>=1 && units<=100) {
        printf("Bill: ₹%d",units * 5);
    } else if (units>=101 && units<=200) {
        printf("Bill: ₹%d",500 + (units - 100)*9);
    } else {
        printf("Bill: ₹%d",1400 + (units -200)*16);
    }

    return 0;
}