#include<stdio.h>
#include<math.h>
int dec_bin(int n);
int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    dec_bin(n);
}
int dec_bin(int n)
{
    if(n==0)
        return;
    dec_bin(n/2);
    printf("%d",n%2);
}
