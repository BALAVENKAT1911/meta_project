#include <stdio.h>
int main() {
    FILE *file;
    char filename[100];
    char ch;
    file=fopen("file5","w");
fputs("hello",file);
fclose(file);
    printf("Enter the filename to open: ");
    scanf("%s", filename);
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
    return 0;
}
