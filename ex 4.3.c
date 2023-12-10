#include <stdio.h>
int main()
{
    int n;
    int max = -1;
    int num;

    printf("Enter the number of values: ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("Invalid input, Please enter a positive number of value:\n");
        return 0;
    }

    for (int i = 1; i <= n; i++)
    {
        printf("Enter value %d: ", i);
        scanf("%d", &num);
        if (num > max)
        {
            max = num;
        }
    }
    printf("The maximum value is: %d\n", max);
    return 0;
}