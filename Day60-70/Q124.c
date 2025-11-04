/*Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.*/

#include <stdio.h>
#include <string.h>
int main() {
    char s[1000];

    printf("Enter a string: ");
    scanf("%s", s);

    int n = strlen(s);
    int last_index[256]; 
    for(int i = 0; i < 256; i++) {
        last_index[i] = -1; 
    }
    int max_len = 0;
    int start = 0;

    for(int i = 0; i < n; i++) {
        
        if(last_index[(int)s[i]] >= start) {
            start = last_index[(int)s[i]] + 1;
        }

        last_index[(int)s[i]] = i;

        if(i - start + 1 > max_len) {
            max_len = i - start + 1;
        }
    }
    printf("Length of the longest substring without repeating characters: %d\n", max_len);
    return 0;
}