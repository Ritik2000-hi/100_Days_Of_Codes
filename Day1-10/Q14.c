/*Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/

#include <stdio.h>

void main(){
    char character;
    printf("Enter character: ");
    scanf("%c",&character);

    if(character=='a' || character=='e' || character=='i' || character=='o' || character=='u' ||
    character=='A' || character=='E' || character=='I' || character=='O' || character=='U'
    ){
        printf("Vowel");
    } else{
        printf("Consonant");
    }
}