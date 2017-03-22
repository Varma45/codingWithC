#include<stdio.h>
void swap(int a,int b);
void main()
{
    int a=5,b=20;
    swap(a,b);
    printf("a=%d b=%d\n",a,b);
}
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("a=%d b=%d\n",a,b);
}
