/*Q82: Print each character of a string on a new line.

Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/

#include <stdio.h>

int main() {
    char str[100];
    fgets(str,100,stdin);

    int length=0;
    while(str[length] != '\0') {
        if (str[length] == '\n') break;
        printf("\n%c",str[length]);
        length++;
    }
    return 0;
}