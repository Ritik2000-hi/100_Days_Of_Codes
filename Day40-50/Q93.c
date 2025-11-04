/*Q93: Check if two strings are anagrams of each other.

Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[1000];
    scanf("%s",str1);

    char str2[1000];
    scanf("%s",str2);

    if (strlen(str1) != strlen(str2)) {
        printf("Not anagrams");
        return 0;
    }
    int count[256]={0};
    for (int i = 0; str1[i] != '\0'; i++) {
        count[(unsigned char)tolower(str1[i])]++; // increase count for str1
        count[(unsigned char)tolower(str2[i])]--; // decrease count for str2
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            printf("Not anagrams\n");
            return 0;
        }
    }

    printf("Anagrams\n");
    return 0;
}