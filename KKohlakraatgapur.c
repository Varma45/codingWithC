#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void *twostrs(char *str1,char *str2);
typedef struct{
                char str[10];
                } strs;
void main()
{
    int n,i,j;
    char *merge;
    printf("emter the no of strings\n");
    scanf("%d",&n);
    strs c[n];
    printf("enetr the strings\n");
    for(i=0;i<n;i++)
    {
        scanf(" %[^\n]",&c[i].str);
    }
    merge=c[0].str;
    for(j=1;j<n;j++)
    {
        merge=twostrs(merge,c[j].str);
    }
    printf("%s\n",merge);
    return;
}
void *twostrs(char *str1,char *str2)
{
    char *ptr;
    int i,j,k;
    j=strlen(str1);
    k=strlen(str2);
   // printf("%d",strlen(str1));
    ptr=(char *)malloc(40 * sizeof(char));
   // printf("%d\n",i);
   if(j<k)
   {

    for(i=0;i<(j);i++)
    {

     //  printf("%d\n",i);
        *(ptr+2*i)=*(str1+i);
        *(ptr+2*i+1)=*(str2+i);
       // printf("%d\n",i);
    }
    i=2*j;
    for(i;i<strlen(str1)+strlen(str2);i++)
    {
        *(ptr+i)=*(str2+j);
        j++;
       //  printf("%d\n",i);
    }

   *(ptr+i)='\0';
//printf("%s",ptr);
   }
   else
   {
       for(i=0;i<(k);i++)
    {

     //  printf("%d\n",i);
        *(ptr+2*i)=*(str1+i);
        *(ptr+2*i+1)=*(str2+i);
       // printf("%d\n",i);
    }
    i=2*k;
    for(i;i<strlen(str1)+strlen(str2);i++)
    {
        *(ptr+i)=*(str1+k);
        k++;
       //  printf("%d\n",i);
    }

   *(ptr+i)='\0';
  // printf("%s",ptr);
   }
    return ptr;
}
