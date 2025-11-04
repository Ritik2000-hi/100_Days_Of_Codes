/*Q23: Write a program to calculate a library fine based on late days.

Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹32

Input 3:
15
Output 3:
Fine ₹90

Input 4:
31
Output 4:
Membership Cancelled

*/
/*1-7 days: ₹2 per day
8-14 days:  ₹4 per day
15-30 days: ₹6 per day
on 31 day:  Membership Cancelled
*/ 


#include <stdio.h>

int main() {
    int fine;
    printf("Enter no. of late days: ");
    scanf("%d",&fine);

    if (fine>=1 && fine<=7) {
        printf("Fine ₹%d\n",fine * 2);
    } else if (fine>=8 && fine<=14) {
        printf("Fine ₹%d\n",fine * 4);
    } else if (fine>=15 && fine<=30) {
        printf("Fine ₹%d\n",fine * 6);
    } else {
        printf("Membership Cancelled");
    }
    return 0;
}