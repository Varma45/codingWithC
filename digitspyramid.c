#include<stdio.h>
void main()
{
int i,j,k;
for(i=0;i<10;i++)
{
    for(j=0;j<10;j++)
    {
        if(j<9-i)
             printf(" ");
        else
            printf("%d",j);
        if(j==9)
        {
            for(k=8;k>=0;k--)
            {
                if(k>=9-i)
                printf("%d",k);
            }
        }

    }
    printf("\n");
}
}
/*       9
        898
       78987
      6789876
     567898765
    45678987654
   3456789876543
  234567898765432
 12345678987654321
0123456789876543210*/
