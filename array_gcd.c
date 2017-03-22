#include<stdio.h>
int array_gcd(int x[],int n);
void main()
{
    int n,i;
    printf("enter n\n");
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
    scanf("%d",&x[i]);
    }
    array_gcd(x,n);
}
int array_gcd(int x[],int n)
{
    int i,temp,k;
    for(i=0;i<n;i++)
    {
        while((x[i+1]%x[i])!=0)
        {
           temp=x[i];
           x[i]= x[i+1]%x[i];
           x[i+1]=temp;
        }
         x[i+1]=x[i];
    /*    for(k=0;k<n;k++)
        {printf("%d\t",x[k]);}
        printf("\n");*/

    }
    printf("%d\n",x[n-2]);
}
