#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d", &a);
    int b=2;
    int c=0;
    while(b<=a)
    {
        if(a%b==0){
            c++;
        }
        b++;
    }
    if(c==1){
        printf("Yes");
    }
    else{
        printf("No");
    }
}