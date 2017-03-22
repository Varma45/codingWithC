#include<stdio.h>
void main()
{
    int i,n,k;
    printf("enter n\n");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        for(k=2;k<=i;k++)
        {
            if(i%k==0)
            break;
        }
        if(k==i)
            printf("%d\n",i);
    }
}
