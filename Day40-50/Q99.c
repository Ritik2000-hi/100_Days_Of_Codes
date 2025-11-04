/*Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/

#include <stdio.h>

int main() {
    int day, month, year;

    // Input in the format dd/mm/yyyy
    scanf("%d/%d/%d", &day, &month, &year);

    // Only handle month 04 as per the question
    if (month == 4)
        printf("%02d-Apr-%d\n", day, year);
    else
        printf("Invalid month\n");

    return 0;
}