/*Q94: Find the longest word in a sentence.

Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];
    fgets(sentence,1000,stdin);

    char word[1000], longest[100];
    int i=0,j=0;
    while (sentence[i]!='\0') {
        if (sentence[i]=='\n') {
            break;
        }
        if (sentence[i]!=' ') {
            word[j++]=sentence[i];
        } else {
            word[j]='\0';
            if (strlen(word) > strlen(longest)) {
                strcpy(longest,word);
            } j=0;
        } i++;
    }
    word[j]='\0';
    if (strlen(word) > strlen(longest)) {
        strcpy(longest,word);
    } 
    printf("%s\n",longest);
    return 0;
}