#include <stdio.h>

void swap_pass_by_value(int a, int b) {
    int temp = a;
    a = b;
    b = temp;

    printf("After swapping in swap_pass_by_value: a = %d, b = %d\n", a, b);
}

void swap_pass_by_reference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;

    printf("After swapping in swap_pass_by_reference: a = %d, b = %d\n", *a, *b);
}

int main() {
    int a = 5, b = 10;

    printf("Before swapping: a = %d, b = %d\n", a, b);

    swap_pass_by_value(a, b);
    printf("After swap_pass_by_value: a = %d, b = %d\n", a, b);

    swap_pass_by_reference(&a, &b);
    printf("After swap_pass_by_reference: a = %d, b = %d\n", a, b);

    return 0;
}