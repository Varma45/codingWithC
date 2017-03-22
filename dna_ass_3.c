#include<stdio.h>
#include<string.h>
void DNAcompl(char dna[],char comp[], int n );
int check(char dna[],char comp[]);
void createself(char dna[],char comp[],int n);
void main()
{
    char dna[20],comp[20];
    int n;
    printf("enter the dna strand\n");
    scanf("%s",dna);
    n=strlen(dna);
    DNAcompl(dna,comp,n);
}
void DNAcompl(char dna[],char comp[], int n)
{
    int i,j,k=0,l=0;
    char temp[20];
    for(i=0;i<n;i++)
    {
        if(dna[i]=='A')
             temp[i]='T';
        else if(dna[i]=='T')
            temp[i]='A';
            else if(dna[i]=='G')
                temp[i]='C';
                else temp[i]='G';
    }
    temp[n]='\0';
    for(j=n-1;j>=0;j--)
    {
       comp[k]=temp[j];
       k++;
    }
    comp[n]='\0';
    for(l=0;l<n;l++)
    {
        printf("%c",comp[l]);
    }
    check(dna,comp);
    createself(dna,comp, n);

}
int check(char dna[],char comp[])
{
    if(strcmp(dna,comp)==0)
        return 1;
    else return 0;
}
void createself(char dna[],char comp[],int n)
{
    char self[2*n];
    strcpy(self,strcat(dna,comp));
    self[2*n]='\0';
    printf("\n%s",self);
}

