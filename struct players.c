#include<stdio.h>
typedef struct{
                char name[30];
                char DOB[10];
                float height;
                float weight;} _PLAYER;

void print(_PLAYER P[],int N);
main()
{
    int N,i,k,j,l;
   /* _PLAYER P[N];*/
    printf("enter the no. of players\n");
    scanf("%d",&N);
    _PLAYER P[N];
    for(i=0;i<N;i++)
    {
        printf("enter the name player %d\n",i+1);
        scanf(" %[^\n]",&P[i].name);
    }
    for(k=0;k<N;k++)
    {
        printf("enter the DOB of player %d in dd-mm-yyyy format\n",k+1);
        scanf(" %[^\n]",&P[k].DOB);
    }
     for(j=0;j<N;j++)
    {
        printf("enter the height of player %d in cms\n",j+1);
        scanf(" %f",&P[j].height);
    }
     for(l=0;l<N;l++)
    {
        printf("enter the weight of player %d kgs\n",l+1);
        scanf(" %f",&P[l].weight);
    }
    print(P,N);

}

void print(_PLAYER P[],int N)
{
    int i;
    for(i=0;i<N;i++)
    {
        printf("%s\t",P[i].name);
        printf("%s\t",P[i].DOB);
        printf("%f\t",P[i].height);
        printf("%f\n",P[i].weight);
    }
}
