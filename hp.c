#include<stdio.h>
void main()
{
    int N,i;
    float sum=1.0;
    printf("enter the no of terms N of the series 1+ 1/2 + 2/3 + 3/4 ....N terma\n");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        sum=sum+((i-1.0)/i);
        printf("k");
    }
    printf("sum is:\n%f",sum);
}
