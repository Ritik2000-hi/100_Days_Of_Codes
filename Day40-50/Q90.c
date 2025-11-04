/*Q90: Toggle case of each character in a string.

Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    fgets(str,1000,stdin);

    for (int i=0 ; i<strlen(str) ; i++) {
        if (str[i] == '\n') {
            break;
        }
        if ((int)str[i]>=65 && (int)str[i]<=90) {
            printf("%c",tolower(str[i]));
        }
        else if ((int)str[i]>=97 && (int)str[i]<=122) {
            printf("%c",toupper(str[i]));
        }
        else {
            printf("%c",str[i]);
        }
    }
    return 0;
}