/*Q98: Print initials of a name with the surname displayed in full.

Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <stdio.h>
#include <string.h>

int main() {
    char name[1000];
    fgets(name,1000,stdin);

    printf("%c.",name[0]); // To print first letter of first word.
    int last_space;
    for (int i=0 ; name[i]!='\0' ; i++) {
        if (name[i]=='\n') {
            break;
        }
        if (name[i]==' ' && name[i+1]!=' ') {
            last_space=i; 
        }
    }
    for (int i=0 ; name[i]!='\0' ; i++) {
        if (name[i]=='\n') {
            break;
        }
        if (i<last_space) {
            if (name[i]==' ' && name[i+1]!=' ') {
                printf("%c.",name[i+1]); 
            }
        }
        if (i>=last_space) {
            printf("%c",name[i]);
        }
    }
    return 0;
}