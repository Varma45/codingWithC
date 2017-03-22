

#include<stdio.h>
void transpose(float A[6][6],float B[6][6]);
void multiply(float A[6][6],float B[6][3],float C[6][3]);
void determinant(float A[6][6]);
void main()
{
    float P[6][6],Q[6][6],R[6][3],S[6][3];
    int i,j,k,l;
    printf("enter the 6x6 matrix to find the transpose and to be multiplied\n");
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            scanf("%f",&P[i][j]);
        }
    }
    transpose(P,Q);
  printf("enter the matrix to multiply with\n");
        for(k=0;k<6;k++)
    {
        for(l=0;l<3;l++)
        {
            scanf("%f",&R[k][l]);
        }
    }

  multiply(P,R,S);
   determinant(P);

}

void transpose(float A[6][6],float B[6][6])
{
    int i,j,k,l;
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            B[i][j]=A[j][i];
        }
    }
    for(k=0;k<6;k++)
    {
        for(l=0;l<6;l++)
        {
            printf("%.2f\t",B[k][l]);
        }
        printf("\n");
    }

}
void multiply(float A[6][6],float B[6][3],float C[6][3])
{
    int a,b,c,d,e;
    for(a=0;a<6;a++)
    {
        for(c=0;c<3;c++)
        {
            for(b=0;b<6;b++)
            {
                C[a][c]=A[a][b]*B[b][c];
            }
        }
    }
    printf("1");
    for(d=0;d<6;d++)
    {
        for(e=0;e<3;e++)
        {
            printf("%f\t",C[d][e]);
        }
        printf("\n");
    }
}

void determinant(float A[6][6])
{
    int i,j,k,p;
    float c,pro=1;
    for(k=0;k<5;k++)
    {
        for(i=k+1;k<6;k++)
        {
            c=A[i][k];
            for(j=0;j<6;j++)
            {
                A[i][j]=A[i][j]-(A[k][j]*c/(A[k][k]));
            }
        }
    }
    for(p=0;p<6;p++)
    {
        pro=pro*A[p][p];
    }
    printf("%f",pro);
}
