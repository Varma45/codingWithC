#include<stdio.h>
void main()
{
    int n;
    printf("enter the number less than 0<num<500\n");
    scanf("%d",&n);
    do{ if(n==0)
        return;
    if((n/100)!=0)
    {
        if((n/100)==1)
            printf("C");
        if((n/100)==2)
            printf("CC");
        if((n/100)==3)
            printf("CCC");
        if((n/100)==4)
            printf("CD");
    }
    n=n%100;
    if((n/10)!=0)
    {
        if((n/10)==1)
            printf("X");
        if((n/10)==2)
            printf("XX");
        if((n/10)==3)
            printf("XXX");
        if((n/10)==4)
            printf("XL");
        if((n/10)==5)
            printf("L");
        if((n/10)==6)
            printf("LX");
        if((n/10)==7)
            printf("LXX");
        if((n/10)==8)
            printf("LXXX");
        if((n/10)==9)
            printf("XC");
    }
    n=n%10;
    if(n==1)
        printf("I");
    if(n==2)
        printf("II");
    if(n==3)
        printf("III");
    if(n==4)
        printf("IV");
    if(n==6)
        printf("VI");
    if(n==7)
        printf("VII");
    if(n==8)
        printf("VIII");
    if(n==9)
        printf("IX");
    if(n==5)
        printf("V");

   printf("\nenter the number less than 0<num<500\n");
    scanf("%d",&n); }while(n!=0);
}
