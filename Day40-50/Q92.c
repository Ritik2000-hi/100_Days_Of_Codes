/*Q92: Find the first repeating lowercase alphabet in a string.

Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

#include <stdio.h>

int main() {
    char str[1000];
    fgets(str,1000,stdin);

    for(int i=0 ; str[i]!='\0' ; i++) {
        if (str[i]=='\n') {
            break;
        }if ((int)str[i]>=97 && (int)str[i]<=122) {
            printf("%c",str[i]);
            break;
        }
    }
    return 0;
}