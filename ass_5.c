#include<stdio.h>
#include<string.h>
typedef struct {
                int val;
                int op[2];
                char oper;} record;
void inputvar(record vars[],int n);
main()
{
    int n,x;
    char L;
    printf("enter the no of variables\n");
    scanf("%d",&n);
    record vars[n];
    do {printf("enter the record of a variable for example if you want to enter about x3 enter 3 or x2 enter 2\n");
    scanf("%d",&x);
    vars[x-1].val=x;
    printf("enter the operands for example if x%d=x1+x5 enter 1 5 or x2*x4 enter 2 4\n",x);
    scanf("%d%d",&vars[x-1].op[0],&vars[x-1].op[1]);
    printf("enter the operator if x%d=x1+x5 enter + or x%d=x2*x4 enter *\n",x,x);
    scanf("\n %c",&vars[x-1].oper);
    printf("do you want to enter more relations??\nif yes enter Y no then N \n");
    scanf("\n %c",&L);}while(L=='Y'||L=='y');
    inputvar(vars,n);
}
void inputvar(record vars[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if (vars[i].val!=i+1)
        {
            printf("x%d is the input variable\nenter the value of x%d\n",i+1,i+1);
            scanf("%d",&vars[i].val);
        }
    }
}

