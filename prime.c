#include<stdio.h>
int main()
{
    int num,count=2;
    printf("enter the number to be tested for prime\n");
    scanf("%d",&num);
    if(num==2){printf("2  is a prime");}
    else
        for(count=2;count<num;++count)
        {
        if(num%count==0)
        {
            printf("%d is not prime",num);
            break;
        }
        if(count==num-1)
        {
            printf("%d is prime",num);
        }

        }
    return 0;
}
