#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j;
    int *ptr, *p;

    printf("Enter the number of elements to be stored: ");
    scanf("%d", &n);

    // Dynamically allocate memory using calloc()
    ptr = (int*)calloc(n, sizeof(int));

    // Check if memory is successfully allocated by calloc()
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {
        printf("Memory successfully allocated using calloc.\n");
    }

    printf("Enter the elements: ");
    for (i = 0; i < n; ++i) {
        scanf("%d", ptr + i);
    }

    printf("Elements stored in memory are: \n");
    for (i = 0; i < n; ++i) {
        printf("%d ", *(ptr + i));
    }

    printf("\nEnter the element to be searched: ");
    scanf("%d", &j);

    p = ptr;
    while (p != NULL) {
        if (*p == j) {
            printf("%d is present at location %p in memory.\n", j, p);
            break;
        }
        else {
            p++;
        }
    }

    if (p == NULL) {
        printf("%d is not present in memory.\n", j);
    }

    // Release the memory using free()
    free(ptr);

    return 0;
}