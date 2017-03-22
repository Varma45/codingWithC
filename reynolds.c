#include<stdio.h>
#include<math.h>
void main()
{
    double p[6];
    int i,j;
    for(i=0;i<6;i++)
    {
        scanf("%lf",&p[i]);
    }
    for(j=0;j<6;j++)
    {
        printf("\n%lf",sqrt(2*p[j]/1.225));
    }
    return;

}
