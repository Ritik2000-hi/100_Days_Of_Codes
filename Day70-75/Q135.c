/*Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.*/

#include <stdio.h>
int main() {
    FILE *fp;
    char line[200];

    fp = fopen("info.txt", "a");

    if (fp == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    printf("Enter a line to append to the file:\n");
    getchar();  // Clear the newline left in the input buffer
    fgets(line, sizeof(line), stdin);

    fputs(line, fp);

    fclose(fp);
    printf("Text appended successfully to info.txt\n");
    return 0;
}