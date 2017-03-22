#include<stdio.h>
void main()
{
    float A[4][4] = {{2,1,-4,1},{-4,3,5,-2},{1,-1,1,-1},{1,3,-3,2}};
    int B[4][1]= {{4},{-10},{2},{-1}};
    float AB[4][8] ;
    float x[4][1];
    float f1,f2;
    int i,j,k,l,m,n,o,p,q,r,s,t,a=0;
    for(n=0;n<4;n++)
    {
        for(o=0;o<4;o++)
        {
            AB[n][o]=A[n][o];
        }
    }
    for(p=0;p<4;p++)
    {
        for(q=4;q<8;q++)
        {
            if(q-p ==4)
            {
                AB[p][q]= 1.00;
            }
            else
            {
                AB[p][q]=0.00;
            }
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(j!=i)
            {
                f1 = AB[j][i];
                f2 =AB[i][i];
                for(k=0;k<8;k++)
                {
                    AB[i][k]=AB[i][k]/AB[i][i] ;
                  // printf("for i = %d\tj = %d\tk=%d\n%f\t",i,j,k,AB[j][k]);
                    AB[j][k] = AB[j][k]-(f1)*AB[i][k];
                  //  printf("%f\t%f\t%f\t%f\n",AB[j][k],AB[j][i],AB[i][i],AB[i][k]);

                }
            }
        }
    }
    printf("\n");
   for(l=0;l<4;l++)
    {
        for(m=0;m<8;m++)
        {
            printf("%f\t",AB[l][m]);
        }
        printf("\n");
    }
    for(r=0;r<4;r++)
    {
        for(s=4;s<8;s++)
        {
            x[s-4][r] = (AB[r][s])*B[s-4][r];
        }
    }
    for(t=0;t<4;t++)
    {
        printf("\n%f",x[t][0]);
    }
}
