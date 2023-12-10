#include<stdio.h>
int main()
{
    int arr[]={45,12,67,34,89,56};
    int target;
    printf("Select the target: ");
    scanf("%d", &target);
    int c=0;

    for (int i = 1; i < 6; i++)
    {
        if(arr[i]==target)
        c++;
    }
    if (c==1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }    
    return 0;  
}