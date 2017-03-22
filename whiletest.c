#include<stdio.h>
void main()
{
    int num = 109;
    for(num=109;num<113;num++)
    {while (num>0)
    {
        printf("%d\n",num%10);
        num = num /10 ;
    }
}

}
