#include<stdio.h>
#include<math.h>
void main()
{
    int i,j,x=0;
    double cpth[21];
    for(i=0;i<21;i++)
    {
        cpth[i]=1-4*sin(x*3.1415/180)*sin(x*3.1415/180);
        x=x+18;
      //  printf("\n%d",x);
      //  printf("\n%lf",1-4*sin(x*3.1415/180)*sin(x*3.1415/180));
    }
    for(j=0;j<21;j++)
    {
      printf("\n%lf",cpth[j]);
    }
}
