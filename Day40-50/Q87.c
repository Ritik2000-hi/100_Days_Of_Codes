/*Q87: Count spaces, digits, and special characters in a string.

Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str,1000,stdin);

    int count_space=0, count_digit=0, count_special=0;

    for(int i=0 ; i<strlen(str) ; i++) {
        if (str[i] == '\n') {
            break;
        }
        if ((int)str[i] >= 65 && (int)str[i] <=90 || (int)str[i] >=97 && (int)str[i] <=122) {
            continue;
        }
        else if ((int)str[i] >=48 && (int)str[i] <=57) {
            count_digit++;
        }
        else if (str[i] == ' ') {
            count_space++;
        }
        else {
            count_special++;
        }
    } printf("\nSpaces=%d, Digits=%d, Special=%d",count_space,count_digit,count_special);
    return 0;
}