#include<stdio.h>
int main() {
    int a,b;
    printf("enter the numbers");
    scanf("%d%d",&a,&b);
    int c=a+b;
    int d=a-b;
    int e=a*b;
    int f=a%b;
    printf("\n addition of %d and %d is %d", a,b,c);
    printf("\n subtraction of %d and %d is %d", a,b,d);
    printf("\n multiplication of %d and %d is %d", a,b,e);
    printf("\n remainder of %d and %d is %d", a,b,f);
    return 0;
}