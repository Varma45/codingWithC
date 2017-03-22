#include<stdio.h>
void main()
{

    int n,min,i,j;
    printf("enter the no of elements in the set to find the minimum :(\n");
    scanf("%d",&n);
    int set[n];
    printf("enter the set of numbers \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&set[i]);
    }
    min = set[0];
    for(j=0;j<n;j++)
    {
        if (set[j]<min)
        {
            min = set[j];
        }
    }
    printf("%d is the minimum of the set",min);
}
