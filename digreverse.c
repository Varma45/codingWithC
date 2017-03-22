#include<stdio.h>
#include<math.h>
int reverse(int n, int);
int main()
{
    int n,sum=0;
    printf("enter the num :\n");
    scanf("%6d",&n);
    printf("%d\n",reverse(n,sum));
  /*  printf("%d",sum);*/
    if(n==reverse(n,sum))
    {
        printf("num is palindrome\n");
        return 1;
    }
    else return 0;
}
int rem=0;
int reverse(int n,int sum)
{
    if(n)
    {
        rem=n%10;
        sum=sum*10+rem;
       /* printf("%d \t %d \n",sum,n);*/
        reverse(n/10,sum);

    }
    else            /*if number becomes zeo sum becomes the reverse number then only we can return sum*/
    return sum;
}
