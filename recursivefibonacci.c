#include<stdio.h>
int fibonacci(int n);
int count=0,i=0;
void main()
{
    int n,i;
    /* printf("enter n to get the nth term\n");
    scanf("%d",&n);
    printf("%d\n",fibonacci(n));
    printf("%d\n",count);*/
      for(i=1;i<16;i++)
    {
        n=count;/*n can store previous count value*/
      /*  printf("count:%d\tn:%d\n",count,n);*/
        printf("%d th term:%d\n",i,fibonacci(i));
      /*   printf("count:%d\tn:%d\n",count,n);*/
        count=count-n;/*new count - old count*/
       /*  printf("count:%d\tn:%d\n",count,n);*/
       printf("count:%d\n",count);
    }
}

int fibonacci(int n)
{
    count++;
   /* printf("%d\n",count);*/
    if(n==0||n==1)
        return n;
    else
        return (fibonacci(n-1)+fibonacci(n-2));

}

