#include <stdio.h>
int main()
{
    int num, sum = 0, digit;
    num = 446;

    while (num != 0)
    {
        digit = num % 10; // Extract the last digit
        sum += digit;     // Add the digit to the sum
        num = num / 10;   // Remove the last digit
    }
    printf("Sum of the digits: %d\n", sum);
    return 0;
}