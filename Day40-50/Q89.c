/*Q89: Count frequency of a given character in a string.

Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str,1000,stdin);

    char character;
    int count_character=0;
    printf("Enter character whose frequency you want to find: ");
    scanf("%c",&character);

    for (int i=0 ; i<strlen(str) ; i++) {
        if (str[i] == character) {
            count_character++;
        }
    } 
    printf("\nFrequency: %d",count_character);
    return 0;
}