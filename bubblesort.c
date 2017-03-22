#include<stdio.h>
int main()
{
    int a[6]={23,42,4,15,8,16};
    int i,j,k,temp;
   /* for(i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
}*/
     for(j=0;j<6;j++)
     {
         for(k=0;k<(6-j);k++)
         {
             if(a[k+1]<a[k])
             {
                 temp = a[k];
                 a[k]=a[k+1];
                 a[k+1]=temp;
             }
         }
     }

     for(i=0;i<6;i++)
     {
         printf("%d\n",a[i]);
     }
     return 0;
}

