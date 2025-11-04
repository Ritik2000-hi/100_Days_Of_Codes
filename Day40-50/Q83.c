/*Q83: Count vowels and consonants in a string.

Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str,100,stdin);

    int count_vowel=0,count_consonant=0;
    for (int i=0 ; i<strlen(str) ; i++) {
        if (str[i]=='\n') {
            break;
        }
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'
        || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U') {
            count_vowel++;
        } else {
            count_consonant++;
        }
    } printf("\nVowels=%d, Consonant=%d",count_vowel,count_consonant);
    return 0;
}