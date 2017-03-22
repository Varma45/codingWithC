/*25. Write a program which reads names of N (N to be read before) students  (full names including all the parts)
in an array and sort them lexicographically. Create an input file containing the number of students in the
first line, followed by names of students in each line separately. Provide the output sorted list using your program.
For example an input file may have the following information:

 5
 Rohan Gavaskar
 Kapildev Nikhanj
 Rahul Dravid
 Dilip Doshi
 Anshuman Gawekwad
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct {
                char name[20];} Name;
void lexico(Name array[],int n);
void main()
{
    int n,i;
    printf("enter no of students\n");
    scanf("%d",&n);
    Name array[n];
    printf("enter the names\n");
    for(i=0;i<n;i++)
    {
        scanf(" %[^\n]",&array[i].name);
    }
    lexico(array,n);
}
void lexico(Name array[],int n)
{
    int i,j,k;
    char temp[20];
    //printf("1\n");
  //  printf("%s",array[0].name);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(array[j].name[0]<array[i].name[0])
            {
               strcpy(temp,array[j].name) ;
                strcpy(array[j].name,array[i].name);
                strcpy(array[i].name,temp);
           /*     printf("%d\n",i);
                printf("%s\n",array[0].name);
                printf("%s\n",array[1].name);
                printf("%s\n",array[2].name);
                printf("%s\n",array[3].name);
                printf("%s\n",array[4].name);*/

            }
        }
    }
/*  printf("%s\n",array[0].name);
    printf("%s\n",array[1].name);
    printf("%s\n",array[2].name);
    printf("%s\n",array[3].name);
    printf("%s\n",array[4].name);*/
}
