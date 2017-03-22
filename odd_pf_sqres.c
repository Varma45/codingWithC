#include<stdio.h>
#include<math.h>
void main()
{
    int i,j,N;
    float X;
    int a , b;
    a=2;b=3;
    X=(a)/b;
    printf("%f\nenter the value os n\n",X);
    scanf("%d",&N);
    for(i=2;i<N;i++)
    {
        if((i%10==1)||(i%10==9)||(i%10==5))
        {
            for(j=0;j<i/2;j++)
            {
                if(j*j==i)
                {
                    printf("%d\n",i);
                }
            }
        }
    }
}
