#include<stdio.h>
int main()
{
    int a,b,exchange;
    printf("enter the 2 numbers\n");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        exchange=a;
        a=b;
        b=exchange;
    }
    while((b%a)!=0)
    {
        exchange=b%a;
        b=a;
        a=exchange;
    }
    printf("%d is gcd",a);
    return 0;
}
