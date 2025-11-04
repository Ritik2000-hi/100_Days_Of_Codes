/*Q85: Reverse a string.

Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);

    int start=0,end=strlen(str)-1;
    while(start<=end) {
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;

        start++;
        end--;
    }
    printf("%s\n", str);
    return 0;
}