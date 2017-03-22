#include<stdio.h>
void main()
{
    int N,i,temp,marks,sum=0,ex=0,a=0,b=0,c=0,d=0,p=0,f=0;
    float mean;
     printf("enter the no of students appeared in exam\n");
    scanf("%d",&N);
    printf("enter the marks obtained by these students\n");
    for(i=0;i<N;i++)
    {
        scanf("%d",&temp);
        marks=temp;
        sum=sum+marks;
        if(90<=marks<=100)
            {ex++;}
        if (80<=marks<90)
            {a++;}
        if  (70<=marks<80)
            {b++;}
        if(60<=marks<70)
            {c++;}
        if  (50<=marks<60)
            {d++;}
        if (40<=marks<50)
            {p++;}
        else
            f++;
    }
    mean=sum/N;
    printf("%f is the mean\n",mean);
    printf("%d are no ex's\n",ex);
    printf("%d are no a's\n",a);
    printf("%d are no b's\n",b);
    printf("%d are no c's\n",c);
    printf("%d are no d's\n",d);
    printf("%d are no p's\n",p);
    printf("%d are no f's\n",f);
}
