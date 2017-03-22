#include<stdio.h>
void determinent(float A[3][3]);
void main()
{
    int p,q;
    float A[3][3]={1,2,3,4,7,11,5,6,9};
    determinent(A);
    for(p=0;p<3;p++)
    {
        for(q=0;q<3;q++)
        {
            printf("%f\t",A[p][q]);
        }
        printf("\n");
    }


}
void determinent(float A[3][3])
{
    int i,j,k;
    float c;
    for(k=0;k<1;k++)
    {
        for(i=k+1;i<3;i++)
        {
            c=A[i][k];
            for(j=0;j<3;j++)
            {
               /* printf("\n%f\t%f\t%f\t%f\n\n",A[i][j],A[k][j],c,A[k][k]);*/
                A[i][j]=A[i][j]-((A[k][j])*(c/(A[k][k])));

            }
        }
    }
}
