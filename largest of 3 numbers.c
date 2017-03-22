#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the values to be compared for deciding the greatest number\n");
    scanf("%d%d%d",&a,&b,&c);

        if((a>b)&&(a>c))
        {
            printf("%d is the largest number",a);
        }
        else if(b>c)
        {
            printf("%d is the largest number",b);
        }
        else if(c>b) {
            printf("%d is the largest ",c);
        }
        else if((b!=a)&&(b=c)){printf("%d is largest",b);}
        else {printf("what a fool enter atleast
                      different no's");}
    }

