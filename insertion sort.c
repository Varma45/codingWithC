#include<stdio.h>
int main()
{
    int a[6];
    int i,j,k,temp;
    for(i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
}
     for(j=0;j<6;j++)
     {
         for(k=0;k<j;k++)
         {
             if(a[j-k]<a[j-k-1])
             {
                 temp = a[j-k];
                 a[j-k] = a[j-k-1];
                 a[j-k-1] = temp;
             }
         }
     }
     for(i=0;i<6;i++)
     {
         printf("%d\n",a[i]);
     }
     return 0;
}
