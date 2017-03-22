#include<stdio.h>
#include<math.h>
void mean(int marks[],int n);
void grades(int marks[],int n);
int max(int a,int b);
void main()
{
    int marks[100],n,i;
    printf("enter the no of students appeared in the exam\n");
    scanf("%d",&n);
    printf("enter the marks secured by each student\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }
    mean(marks,n);
    grades(marks,n);

}

void mean(int marks[],int n)
{
   float mean,sum=0;
   int k;
   for(k=0;k<n;k++)
   {
       sum=sum+marks[k];
   }
   mean=sum/n;
   printf("%f is the mean\n",mean);

}

void grades(int marks[],int n)
{
    int j,ex=0,a=0,b=0,c=0,d=0,p=0,f=0,max_value;
    for(j=0;j<n;j++)
    {
        if(marks[j]>=90)
            ex++;
        else if(marks[j]>80)
             a++;
             else if(marks[j]>=70)
                b++;
                   else if(marks[j]>=60)
                    c++;
                        else if(marks[j]>=50)
                            d++;
                            else if(marks[j]>=40)
                                p++;
                                 else
                                    f++;
    }
    printf("%d are no of ex's\n",ex);
    printf("%d are no of a's\n",a);
    printf("%d are no of b's\n",b);
    printf("%d are no of c's\n",c);
    printf("%d are no of d's\n",d);
    printf("%d are no of p's\n",p);
    printf("%d are no of f's\n",f);
    max_value=max(max(max(ex,a),max(b,c)),max(max(d,p),max(p,f)));
    if(max_value==ex)
        printf("there r more no.of ex's\n");
    if(max_value==b)
        printf("there r more no.of b's\n");
    if(max_value==c)
        printf("there r more no.of c's\n");
    if(max_value==d)
        printf("there r more no.of d's\n");
    if(max_value==p)
        printf("there r more no.of p's\n");
    if(max_value==f)
        printf("there r more no.of f's\n");
}
int max(int a, int b)
{
    if(a>b)
        return a;
    else
        return b;
}


