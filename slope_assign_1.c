#include<stdio.h>
void main()
{
    float x1,y1,x2,y2,slope;
    printf("enter the two points co-ordinates x1 y1 x2 y2\n");
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    slope=((y2-y1)/(x2-x1));
    printf("slope = %f\n",slope);
}
