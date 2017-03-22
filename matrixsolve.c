#include<stdio.h>
void main()
{
 float    A[4][5] = { { 1    , 1    , 3    , 4   , 28},
     {0  ,   1  ,   4   ,  1   , 18},




    {2  ,   3    , 0   ,  1 ,   12},
     {3  ,   0  ,  -1 ,   -2 ,   -8}
};
     int i,j,k,l;
     float m,n;

     for(j=0;j<4;j++)
     {
         for(i=j+1;i<4;i++)
         {

              m= A[i][j];
              n=A[j][j];
             for(k=0;k<5;k++)
             {
               // printf("%d\t",A[i][k]);
                 A[i][k] = A[i][k]-(m/n )*A[j][k];
                 //printf("%d\t%d\t%d\t%d\n",A[i][k],m,n,A[j][k]);
             }
         }
     }
        for(k=0;k<4;k++)
        {
           for(l=0;l<5;l++)

           {

            printf("%f\t",A[k][l]);}
            printf("\n");
        }

}
