/*Q95: Check if one string is a rotation of another.

Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[1000],str2[1000];
    scanf("%s",str1);
    scanf("%s",str2);
    
    if (strlen(str1)!=strlen(str2)) {
        printf("Not rotation");
    }
    char temp[200];
    strcpy(temp, str1);
    strcat(temp, str1);

    int found = 0;
    for (int i = 0; i <= strlen(temp) - strlen(str2); i++) {
        int j;
        for (j = 0; j < strlen(str2); j++) {
            if (temp[i + j] != str2[j])
                break;
        }
        if (j == strlen(str2)) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Rotation\n");
    else
        printf("Not rotation\n");

    return 0;
}