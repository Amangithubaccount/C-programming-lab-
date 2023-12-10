#include<stdio.h>
int main(){
    int choice;
    float radius, side, length, width;
    float area, perimeter;
    printf("Choose a shape to calculate area and perimeter:\n");
    printf("1. Circle\n");
    printf("2. Square\n");
    printf("3. Rectangle\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("Enter the radius of the circle: ");
        scanf("%f", &radius);
        area = 3.14159265359 * radius * radius;
        perimeter = 2 * 3.14159265359 * radius;
    } else if (choice == 2) {
        printf("Enter the side of the square: ");
        scanf("%f", &side);
        area = side * side;
        perimeter = 4 * side;
    } else if (choice == 3) {
        printf("Enter the length of the rectangle: ");
        scanf("%f", &length);
        printf("Enter the width of the rectangle: ");
        scanf("%f", &width);
        area = length * width;
        perimeter = 2 * (length + width);
    } else {
        printf("Invalid choice. Please select 1, 2, or 3.\n");
        return 1; // Exit the program with an error code
    }

    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);

    return 0;
}