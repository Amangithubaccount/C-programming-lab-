#include <stdio.h>
#include <stdlib.h>

#define STUDENTS_COUNT 3
#define MARKS_COUNT 3

void writeToFile(FILE *file, int studentsMarks[STUDENTS_COUNT][MARKS_COUNT]);
void readFromFile(FILE *file, int studentsMarks[STUDENTS_COUNT][MARKS_COUNT]);

int main() {
    int studentsMarks[STUDENTS_COUNT][MARKS_COUNT] = {
        {85, 90, 78},
        {68, 75, 80},
        {92, 88, 90}
    };

    // Writing data to a file
    FILE *file = fopen("students_marks.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    writeToFile(file, studentsMarks);
    fclose(file);

    // Reading data from a file
    file = fopen("students_marks.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    readFromFile(file, studentsMarks);
    fclose(file);

    return 0;
}

void writeToFile(FILE *file, int studentsMarks[STUDENTS_COUNT][MARKS_COUNT]) {
    for (int i = 0; i < STUDENTS_COUNT; i++) {
        for (int j = 0; j < MARKS_COUNT; j++) {
            fprintf(file, "%d ", studentsMarks[i][j]);
        }
        fprintf(file, "\n");
    }
}

void readFromFile(FILE *file, int studentsMarks[STUDENTS_COUNT][MARKS_COUNT]) {
    for (int i = 0; i < STUDENTS_COUNT; i++) {
        for (int j = 0; j < MARKS_COUNT; j++) {
            fscanf(file, "%d", &studentsMarks[i][j]);
        }
    }

    // Display the marks
    printf("Marks after reading from file:\n");
    for (int i = 0; i < STUDENTS_COUNT; i++) {
        for (int j = 0; j < MARKS_COUNT; j++) {
            printf("%d ", studentsMarks[i][j]);
        }
        printf("\n");
    }
}