#include<stdio.h>
#include<math.h>
void main()
{
    float x,sum=0.0,term;
    int n,i;
    printf("enter the value of x and n\n");
    scanf("%f%d",&x,&n);
    term=x;
    sum=x;
    for(i=1;i<n;i++)
    {
        term=-term*((x*x)/((2*i+1)*(2*i)));
        sum=sum+term;
    }
    printf("the value of sinx:\n%f",sum);
}
