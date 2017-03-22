#include<stdio.h>
#include<math.h>
void Union(int x[],int x_size,int y[],int y_size);
void intersection(int x[],int x_size,int y[],int y_size);
void main()
{
    int x_size,y_size,i,j;
    printf("enter number of elements in x and y sets respectively\n");
    scanf("%d%d",&x_size,&y_size);
    int x[x_size],y[y_size];
    printf("enetr the elements in x\n");
    for(i=0;i<x_size;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("x:{  ");
    for(i=0;i<x_size;i++)
    {
        printf("%d  ",x[i]);
    }
     printf("}\nnow enter y\n");
     for(j=0;j<y_size;j++)
    {
        scanf("%d",&y[j]);
    }
    printf("y:{  ");
    for(j=0;j<y_size;j++)
    {
        printf("%d  ",y[j]);
    }
    printf("}\n");
    Union(x,x_size,y,y_size);
    intersection(x,x_size,y,y_size);
}
void Union(int x[],int x_size,int y[],int y_size)
{
    int z[x_size+y_size],i,j,k,l;
    for(i=0;i<x_size;i++)
    {
        z[i]=x[i];
    }

    for(j=0;j<y_size;j++)
    {
        for(k=0;k<x_size;k++)
        {
            if(y[j]==x[k])
            break;
        }
        if(k==x_size)
        {
            z[i]=y[j];
            i++;
        }
    }
     printf("xUy:{");
    for(l=0;l<i;l++)
    {
        printf("%d  ",z[l]);
    }
    printf("}\n");
}
void intersection(int x[],int x_size,int y[],int y_size)
{
    int n;
    if(x_size>=y_size)
    {
        n=x_size;
    }
    else
        n=y_size;
    int z[n],i=0,j,k,l;
    for(j=0;j<x_size;j++)
    {
        for(k=0;k<y_size;k++)
        {
            if(x[j]==y[k])
            {
                z[i]=x[j];
                i++;
                break;
            }
        }
    }
    printf("\nx intersection y: {  ");
    for(l=0;l<i;l++)
    {
        printf("%d  ",z[l]);
    }
    printf("}");

}
