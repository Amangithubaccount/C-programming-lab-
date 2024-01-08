#include <stdio.h>
#include <string.h>

struct student {
    int id;
    char name[50];
    float marks[5];
};

void calculateTotal(struct student*);
void printDetails(struct student*);

int main() {
    struct student s1;

    printf("Enter ID: ");
    scanf("%d", &s1.id);
    getchar(); // To consume the newline left-over

    printf("Enter Name: ");
    fgets(s1.name, sizeof(s1.name), stdin);
    s1.name[strlen(s1.name) - 1] = '\0'; // To remove the newline character added by fgets

    for (int i = 0; i < 5; i++) {
        printf("Enter Marks for Subject %d: ", i + 1);
        scanf("%f", &s1.marks[i]);
    }

    calculateTotal(&s1);
    printDetails(&s1);

    return 0;
}

void calculateTotal(struct student *s) {
    float total = 0;

    for (int i = 0; i < 5; i++) {
        total += s->marks[i];
    }

    s->marks[5] = total;
}

void printDetails(struct student *s) {
    printf("\nStudent Details:\n");
    printf("ID: %d\n", s->id);
    printf("Name: %s\n", s->name);
    printf("Marks:\n");

    for (int i = 0; i < 5; i++) {
        printf("Subject %d: %.2f\n", i + 1, s->marks[i]);
    }

    printf("Total Marks: %.2f\n", s->marks[5]);
}