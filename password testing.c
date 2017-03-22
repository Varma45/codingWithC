#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    char password[100];
    char check[100];
    printf("hii!! please choose a password :-D\n");
    scanf("%s",password);
    system("cls");
    printf("your password has been recorded,Thank You :)\n\nplease enter your pass word to continue\n\n");
    scanf("%s",check);
    if(strcmp(check,password)==0)
        printf("\nhii!!sir welcome ;-)\n");
    else
        printf("wrong password ^_^ -_-\n");

}
