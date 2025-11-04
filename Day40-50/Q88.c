/*Q88: Replace spaces with hyphens in a string.

Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str,1000,stdin);

    for (int i=0 ; i<strlen(str) ; i++) {
        if (str[i] == '\n') {
            break;
        } if (str[i] == ' ') {
            printf("%c",'-');
            continue;
        } printf("%c",str[i]);
    }
    return 0;
}