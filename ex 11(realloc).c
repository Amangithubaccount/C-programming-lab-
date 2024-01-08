#include <stdio.h>
#include <stdlib.h>

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size = 0;
    int* arr = NULL;
    char c;

    do {
        size++;
        arr = (int*) realloc(arr, size * sizeof(int));
        arr[size - 1] = size;
        printf("Press 'n' to add another element, 'p' to print the array, or 'q' to quit: ");
        scanf(" %c", &c);
        getchar(); // Consume newline character

        if (c == 'p') {
            printArray(arr, size);
        }
    } while (c != 'q');

    free(arr);
    return 0;
}