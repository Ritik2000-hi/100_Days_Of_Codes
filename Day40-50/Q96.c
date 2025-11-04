/*Q96: Reverse each word in a sentence without changing the word order.

Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000],word[100];
    fgets(str,1000,stdin);

    int i=0,j=0;
    while (str[i]!='\0') {
        if (str[i]=='\n') {
            break;

        }
        if (str[i]!=' ') {
            word[j++]=str[i];
        }
        else {
            word[j]='\0';
            int start=0,end=strlen(word)-1;
            while (start<end) {
                char temp=word[start];
                word[start]=word[end];
                word[end]=temp;
                start++,end--;
            } printf("%s ",word);
            j=0;
        }i++;
    }
    word[j]='\0';
    int start=0,end=strlen(word)-1;
    while (start<=end) {
        char temp=word[start];
        word[start]=word[end];
        word[end]=temp;
        start++,end--;
    } printf("%s\n",word);
    return 0;
}