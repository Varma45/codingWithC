#include<stdio.h>
int gcd(int a,int b);
void main()
{
    int a,b,G;
    printf("enter the integers to find gcd\n");
    scanf("%d%d",&a,&b);
    G=gcd(a,b);
    if(a<0||b<0)
        return;
    do
    {
        G=gcd(G,a);
        scanf("%d",&a);
    }while(a>0);
    printf("\n%d",G);
}

gcd(int a,int b)
{
    int temp;
   while((b%a)!=0)
   {
       temp=a;
       a=b%a;
       b=temp;
   }
   return a;
}
