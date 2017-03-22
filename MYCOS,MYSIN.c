#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void mycos(float);
void mysin(float);
void main()
{
    float x;
    printf("enter x in radians\n");
    scanf("%f",&x);
    mycos(x);
    mysin(x);
}
void mycos(float x)
{
    int i=1;;
    float sum=1,term=1;
    do{
        term=-term*(x*x)/((2*i-1)*2*i);
        sum=sum+term;
       /* printf("%f\t%d\t%f\n",sum,i,cos(x));
        printf("difference :\t%f\n",sum-cos(x));*/
        i++;
        } while(fabs(sum-cos(x))>0.000005);
    printf("%f\n%d\n",sum,i);
}
void mysin(float x)
{
    int i=1;;
    float sum=x,term=x;
    do{
        term=-term*(x*x)/((2*i+1)*2*i);
        sum=sum+term;
     /*   printf("%f\t%d\t%f\n",sum,i,sin(x));
        printf("difference :\t%f\n",sum-sin(x));*/
        i++;
        } while(fabs(sum-sin(x))>0.000005);
    printf("%f\n%d\n",sum,i);
}
