#include<stdio.h>
int main(){
    float x1,y1,x2,y2,distance;
    printf("enter the values of x1 and y1");
    scanf("%f%f",&x1,&x2);
    printf("enter the values of x2 and y2");
    scanf("%f%f",&x2,&y2);
    distance= sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    printf("distance between the two points is %f", distance);
    return 0;
}