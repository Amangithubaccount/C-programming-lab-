#include <stdio.h>
#include <stdlib.h>

void allocateMemory(int numberOfElements) {
    int *array;

    // Requesting memory using malloc
    array = (int *) malloc(numberOfElements * sizeof(int));

    // Checking if memory has been successfully allocated
    if(array == NULL) {
        printf("Memory could not be allocated.\n");
        exit(0);
    }

    // Memory has been successfully allocated
    printf("Memory successfully allocated using malloc.\n");

    // Freeing the memory
    free(array);
    printf("Malloc Memory successfully freed.\n");
}

int main() {
    int numberOfElements;

    printf("Enter number of elements: ");
    scanf("%d", &numberOfElements);

    allocateMemory(numberOfElements);

    return 0;
}