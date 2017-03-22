#include<stdio.h>
int remain(int);
long long int factorial(long long int n);
void main()
{
   // printf("%d\n",remain(145));
    printf("%d\n",factorial(145));
}
/*int remain(int num)
{
    if(num!=0)
    {
        return (factorial(num%10)+remain(num/10));
    }
}*/
long long int factorial(long long int n)
{

    int i;
    long long fact=1;
    if(n!=0)
    {

        printf("%d\n",fact);
        for(i=1;i<=n;i++)
        {
            fact = fact*i;
            printf("%d \t %ld\n",i,fact);
        }
        return fact;
    }
    else return 1;
}
