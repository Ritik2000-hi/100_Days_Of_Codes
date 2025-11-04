/*Q97: Print the initials of a name.

Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/

#include <stdio.h>
#include <string.h>

int main() {
    char name[1000];
    fgets(name,1000,stdin);

    printf("%c.",name[0]); // To printf first letter of first word.
    for (int i=0 ; name[i]!='\0' ; i++) {
        if (name[i]=='\n') {
            break;
        }
        if (name[i]==' ') {
            printf("%c.",name[i+1]);
        }
    }
    return 0;
}