#include<stdio.h>
int f(int);
int fibo(int n);
int prime(int n);
void main()
{
   int n,i=2,j=0;
   prime(n);
   fibo(n);
   do{
        if(prime(i)==1&&fibo(i)==1)
        {
            printf("%d\n",i);
            j++;
        }
        i++;
   }while(j<8);
}
int fibo (int n)
{
    int i;
    for(i=0;i<n+3;i++)
    {
        if(n==f(i))
        {
            return 1;
        }
        if(f(i)>n)
        {
            return 0;
        }
    }
}
f(int i)
{
    if(i==0||i==1)
        return i;
    else
        return (f(i-1)+f(i-2));
}
int prime(int n)
{
    int i;
    for(i=2;i<=n;i++)
    {
        if((n%i)==0)
            break;
    }
    if(i==n)
        return 1;
    else
        return 0;
}
