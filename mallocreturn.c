#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *retrn(char *str,int n);
char main()
{
    char p[100];
    int n;
    scanf("%[^\n]",&p);
  //  printf("%s",p);
  //  printf("\n%d",strlen(p));
    n=strlen(p);
    //retrn(p,n);
    printf("\n%s",retrn(p,n));
    return;
}
char *retrn(char *str,int n)
{
    char *ptr;
    int i=0;
    ptr=(char *)malloc( n* sizeof(char));
    while(n>0)
    {
        *(ptr+i)=str[n-1];
        n--;
        i++;
      //  printf("\n%s,%d,%d",ptr,n,i);

    }
    ptr[i]='\0';
   // printf("\n%s",ptr);
    return ptr;
    free(ptr);
}
