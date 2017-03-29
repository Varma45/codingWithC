#include<stdio.h>
#include<math.h>

int *Union(int x[],int x_size,int y[],int y_size);
int *intersection(int x[],int x_size,int y[],int y_size);

void main()
{
    int x_size,y_size,i,j,l;
    printf("enter number of elements in x and y sets respectively\n");
    scanf("%d %d",&x_size, &y_size);
    int x[x_size], y[y_size], z[x_size+y_size];
    int *ptr;
    ptr = z;
    printf("enetr the elements in x\n");
    for(i=0; i<x_size; i++)
        scanf("%d", &x[i]);
    
    printf("x:{  ");
    for(i=0;i<x_size;i++)
        printf("%d  ", x[i]);
    printf("}\nnow enter y\n");
    
    for(j=0;j<y_size;j++)
        scanf("%d", &y[j]);
    
    printf("y:{  ");
    for(j=0;j<y_size;j++)
        printf("%d  ", y[j]);
    printf("}\n");

    ptr = Union(x,x_size,y,y_size);
    for(l=0;l<x_size+y_size;l++)
        if(*(ptr+l)!=NULL)
            printf("%d\t",*(ptr+l));
}

int *Union(int x[],int x_size,int y[],int y_size)
{
    static int z[100];
    int i, j, k, l;
    for(i=0;i<x_size;i++)
        z[i] = x[i];

    for(j=0; j<y_size; j++)
    {
        for(k=0; k<x_size; k++)
        {
            if(y[j] == x[k])
            break;
        }
        if(k == x_size)
        {
            z[i] = y[j];
            i++;
        }
    }
    return z;
}

int *intersection(int x[], int x_size, int y[], int y_size)
{
    static int P[100];
    int i=0,j,k,l;
    for(j=0; j<x_size; j++)
    {
        for(k=0; k<y_size; k++)
        {
            if (x[j]==y[k])
            {
                P[i] = x[j];
                i++;
                break;
            }
        }
    }
    
    printf("\nx intersection y: {  ");
    for(l=0; l<i; l++)
        printf("%d  ",P[l]);
    printf("}");
 
    return P;
}
