/*.............Name:P Venkata Yashwanth Kumar............
................Roll No:05AE1013........................
................Program name:a5.c.....................
................PC No:17......................*/
#include<stdio.h>

struct variable
{
  int val;
  int op1,op2;
  char op;
};
void readinput(struct variable vars[100],int n);
void support(int y,struct variable vars[100]);
int evaluate(int v,struct variable vars[100]);
int x[100];
main()
{
  struct variable vars[100];
  int i,n,re,y,v;
  char c;
  for(i=0;i<100;i++)
    {
      x[i]=-1;
    }
  printf("\nEnter the number of variables(<100):");
  scanf("%d",&n);
  c=getchar();
  printf("\nEnter the record for the variables.For example,for x3=x2+x4,you should enter 3,2,4,+ in the record of x3");
do
  {
    printf("\nEnter the number of variable for which you are going to enter the record:");
    scanf("%d",&re);
    c=getchar();
    printf("\nEnter the record of variable x%d",re);
    vars[re-1].val=re;
    printf("\nEnter the 1st operand:");
    scanf("%d",&vars[re-1].op1);
    c=getchar();
    printf("\nEnter the 2nd operand:");
    scanf("%d",&vars[re-1].op2);
    c=getchar();
    printf("\nEnter the operator:");
    scanf("%c",&vars[re-1].op);
    c=getchar();
    printf("\nDo you want to enter one more relation?Y/N");
    scanf("%c",&c);
      }while(c=='y' || c=='Y');
 readinput(vars,n);
 xyz:
 printf("\nEnter the variable(for example,3 for x3)to find the variables that influence its value:");
 scanf("%d",&y);
 c=getchar();
 if(x[y-1]==(-1))
   {
     printf("\n");
     support(y,vars);

   }
 else
   {
     printf("\nx%d is an independent variable",y);
   }
 printf("\nDo you want to check the dependancy of one more variable?Y/N");
 scanf("%c",&c);
 if(c=='y' || c=='Y')
   goto xyz;
 pqr:
 printf("\nEnter the variable(like 3 for x3)to find its value:");
 scanf("%d",&y);
 c=getchar();
 v=evaluate(y,vars);
 printf("\nThe value of x%d is %d",y,v);
 printf("\nDo you want to find the value of one more variable?Y/N");
 scanf("%c",&c);
 if(c=='y' || c=='Y')
   goto pqr;
}
void readinput(struct variable vars[100],int n)
{
  int i;
  char c;
  for(i=1;i<=n;i++)
    {
      if(vars[i-1].val!=i)
	{
	  vars[i-1].val=i;
	  vars[i-1].op1=0;
	  vars[i-1].op2=0;
	  vars[i-1].op='=';
	  printf("\nEnter the value of x%d:",i);
	  scanf("%d",&x[i-1]);
	  c=getchar();
	}
    }
}
void support(int y,struct variable vars[100])
{
  if(vars[y-1].op!='=')
    {
      if(vars[vars[y-1].op1-1].op=='=' && vars[vars[y-1].op2-1].op=='=')
	{
	  printf("x%d x%d ",vars[y-1].op1,vars[y-1].op2);
	}
      else
	{
	  if(vars[vars[y-1].op1-1].op=='=')
	    {
	    }
	  else
	    {
	      printf("x%d ",vars[y-1].op1);
	      support(vars[y-1].op1,vars);
	    }
	  if(vars[vars[y-1].op2-1].op=='=')
	    {
	    }
	  else
	    {
	      printf("x%d ",vars[y-1].op2);
	      support(vars[y-1].op2,vars);
	    }
	}
    }
  else
    {
      printf("x%d x%d ",vars[y-1].op1,vars[y-1].op2);
    }
}
int evaluate(int v,struct variable vars[100])
{
  switch(vars[v-1].op)
    {
    case '=':
      return x[v-1];
      break;
    case '+':
      return(evaluate(vars[v-1].op1,vars)+evaluate(vars[v-1].op2,vars));
      break;
    case '*':
      return(evaluate(vars[v-1].op1,vars)*evaluate(vars[v-1].op2,vars));
      break;
    default :
      return 0;
      break;
    }
}


