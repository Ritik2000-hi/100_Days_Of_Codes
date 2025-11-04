/*Q81: Count characters in a string without using built-in length functions.

Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/

#include <stdio.h>

void count_length(char string[]);

int main() {
    char str[100];
    fgets(str,100,stdin);
    count_length(str);
    return 0;
}

void count_length(char string[]) {
    int count=0 , length=0;
    while (string[length] != '\0') {
        if (string[length] == '\n') {
            break;
        }
        count++;
        length++;
    } printf("\nLength of string is %d",count);
}