#include <stdio.h>

void writeToFile(FILE *file, const char *str) {
    fprintf(file, "%s\n", str);
}

void readFromFile(FILE *file) {
    char str[100];

    while(fgets(str, sizeof(str), file) != NULL) {
        printf("%s", str);
    }
}

int main() {
    FILE *file;

    file = fopen("test.txt", "w");
    if(file == NULL) {
        printf("Could not open file for writing.\n");
        return 1;
    }

    writeToFile(file, "Hello, World!");
    fclose(file);

    file = fopen("test.txt", "r");
    if(file == NULL) {
        printf("Could not open file for reading.\n");
        return 1;
    }

    readFromFile(file);
    fclose(file);

    return 0;
}