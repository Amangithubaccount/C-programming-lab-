#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocate memory block
    int *ptr = (int*) malloc(sizeof(int));
    if(ptr == NULL) {
        printf("Error: Memory allocation failed.\n");
        return 1;
    }

    // Print original value
    *ptr = 10;
    printf("Original value: %d\n", *ptr);

    // Deallocate memory block
    free(ptr);

    // Attempt to access deallocated memory (undefined behavior)
    printf("Value after free(): %d\n", *ptr);

    // Allocate new memory block
    ptr = (int*) malloc(sizeof(int));
    if(ptr == NULL) {
        printf("Error: Memory allocation failed.\n");
        return 1;
    }

    // Print new value
    *ptr = 20;
    printf("New value: %d\n", *ptr);

    return 0;
}