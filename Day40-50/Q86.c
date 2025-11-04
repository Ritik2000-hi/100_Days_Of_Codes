/*Q86: Check if a string is a palindrome.

Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    scanf("%s", str);

    char start=0, end=strlen(str)-1;
    int isPalindrome=1;
    while(start<=end) {
        if(tolower(str[start]) != tolower(str[end])) {
            isPalindrome=0;
        }
        start++;
        end--;
    }
    if (isPalindrome) {
        printf("Palindrome");
    }
    else {
        printf("Not a Palindrome");
    }
    return 0;
}