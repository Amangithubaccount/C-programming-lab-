#include <stdio.h>
#include <string.h>

union info {
    char name[50];
    int roll;
    float cgpa;
};

int main() {
    union info student;

    printf("Enter student name: ");
    scanf("%[^\n]", student.name);
    getchar(); // to consume the newline character

    printf("Enter student roll number: ");
    scanf("%d", &student.roll);

    printf("Enter student CGPA: ");
    scanf("%f", &student.cgpa);

    printf("\nStudent Information:\n");
    printf("Name: %s\n", student.name);
    printf("Roll number: %d\n", student.roll);
    printf("CGPA: %.2f\n", student.cgpa);

    return 0;
}