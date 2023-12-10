#include<stdio.h>
int main()
{
    int temp;
    int arr[6]={23,34,54,28,65,11};
    for (int i = 0; i < 6; i++)
    {
        for (int j = i+1; j < 6; j++)
        {
            if (arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            } 
        }
        
    }
    printf("Sorted array in ascending order: ");
     for (int i = 0; i < 6; i++)
     {
        printf("%d ", arr[i]);
     }
}