/*Q84: Convert a lowercase string to uppercase without using built-in functions.

Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/

#include <stdio.h>

int main() {
    char str[100];
    printf("Please enter string in lowercase character: ");
    fgets(str,100,stdin);

    int i=0;
    while (str[i]!='\0') {
        if (str[i] == '\n') {
            break;
        }
        int ASCII= (int)str[i] - 32; // Convert lowercase chracter into ASCII value and then substarct by 32 to get ASCII value of that alphabet in capital letter.
        printf("%c",(char)ASCII); 
        i++;
    }
    return 0;
}