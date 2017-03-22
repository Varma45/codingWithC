#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,root1,root2,det;
    printf("enter the coefficients of the quadratic equation\n");
    scanf("%f%f%f",&a,&b,&c);
    if(a==0)
    {
        root1=-c/b;
        printf("root is :\n%f",root1);
    }
    det=(b*b-4*a*c);
    if(a!=0&&det>=0)
    {
        root1=(-b+sqrt(det))/(2*a);
        root2=(-b-sqrt(det))/(2*a);
        printf("roots are:\n%f\n%f",root1,root2);
    }
    if(det<0)
       {
           printf("roots are imaginary\n");
           printf("%f+i(%f)\n",-b/(2*a),sqrt(-det)/(2*a));
           printf("%f-i(%f)",-b/(2*a),sqrt(-det)/(2*a));
       }
}
