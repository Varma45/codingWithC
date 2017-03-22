#include<stdio.h>
#include<math.h>
void main()
{
    double y[32];
    double s,fuck;
    int i,j;
    for(i=0;i<23;i++)
    {
        scanf("%lf",&y[i]);
    }
    for(j=0;j<23;j++)
    {
        if((0<=j)&&(j<4))
        {
            s=140*0.5442;
            fuck= 0.5585*s/sqrt((s*s/4)-y[j]*y[j]);
            printf("\n%lf",fuck-0.5442);
        }
        if((4<=j)&&(j<8))
        {
           s=215*0.5442;
            fuck=0.5585*s/sqrt((s*s/4)-y[j]*y[j]);
            printf("\n%lf",fuck-0.5442);
        }
        if((8<=j)&&(j<23))
        {
            s=285*0.5442;
            fuck= 0.5585*s/sqrt((s*s/4)-y[j]*y[j]);
            printf("\n%lf",fuck-0.5442);
        }
    }
}
