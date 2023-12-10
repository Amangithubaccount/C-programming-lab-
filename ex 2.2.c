#include<stdio.h>
int main(){
    float length, breadth, side, radius;
    float rp,ra,sa,sp,ca,cp;
    //rectangle
    printf("enter the length and breadth of rectangle");
    scanf("%f%f", &length, &breadth);
    rp=2*(length + breadth);
    ra=length*breadth;
    printf("\n the perimeter of ractangle is %f",rp);
    printf("\n the area of rectangle is %f",ra); 
    //circle
    printf("\n enter the side of circle");
    scanf("%f", &side);
    sa=side*side;
    sp=4*side;
    printf("\n the perimeter of square is %f", sp);
    printf("\n the area of square is %f", sa);
    //square
    printf("\n enter the radius of square");
    scanf("%f", &radius);
    sa= 3.14*radius*radius;
    sp= 4*3.14*radius*radius;
    printf("\n the perimeter of square is %f", sp);
    printf("\n the area of square is %f", sa);
    return 0;
}