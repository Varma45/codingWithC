#include<stdio.h>
#include<stdlib.h>
typedef struct {
                float real;
                float im;
                } complex;
complex add(complex,complex);
void main()
{
    complex a,b,c;
    printf("enter the 2 complex numbers\n(a+ib) and (c+id) i.e a b c d\n");
    scanf("%f%f%f%f",&a.real,&a.im,&b.real,&b.im);
    c=add(a,b);
    printf("%.2f+i(%.2f)\n",c.real,c.im);
}

complex add(complex a,complex b)
{
    complex c;
    c.real=a.real+b.real;
    c.im=a.im+b.im;
  //  printf("%.2f+i(%.2f)\n",c.real,c.im);
    return c;
}
