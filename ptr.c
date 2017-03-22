#include<stdio.h>
void main()
{
    int x,y;
    int *ptr;
    x=10;
    ptr=&x;
    y=*ptr;
    printf("%d %d %d %u %u %u",x,*ptr,y,&x,&ptr,&y);
}
