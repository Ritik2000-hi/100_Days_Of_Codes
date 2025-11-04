/*Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().*/

#include <stdio.h>

int main() {
    FILE *src, *dest;
    char sourceFile[50], destFile[50];
    char ch;

    printf("Enter source filename: ");
    scanf("%s", sourceFile);

    printf("Enter destination filename: ");
    scanf("%s", destFile);

    // Open source file in read mode
    src = fopen(sourceFile, "r");
    if (src == NULL) {
        printf("Error: Could not open source file!\n");
        return 1;
    }

    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error: Could not create destination file!\n");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully from %s to %s.\n", sourceFile, destFile);

    fclose(src);
    fclose(dest);
    return 0;
}