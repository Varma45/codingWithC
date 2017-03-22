/*5. Read the coefficients (in double) of a polynomial f(x) of degree 5. Read x in float.  Compute its functional value and first derivative in float*/
#include<stdio.h>
void main()
{
    float a0,a1,a2,a3,a4,a5,x,value;
    printf("enter the coefficients a0,a1,a2,a3,a4,a5 of the polynomial a0x^5+a1x^4+a2x^3+a3x^2+a4x+a5\n");
    scanf("%f%f%f%f%f",&a0,&a1,&a2,&a3,&a4,&a5);
    printf("enter the value of x\n");
    scanf("%f",&x);
    value=a0*x*x*x*x*x+a1*x*x*x*x+a2*x*x*x+a3*x*x+a4*x+a5;
    printf("%f\n",value);
}
