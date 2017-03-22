#include<stdio.h>
#include<stdlib.h>
void main()
{
    char scan_line[100];
    printf("enter the line to scan\n");
    scanf("%[^\n]",scan_line);
    system("cls");
    printf("\n%s",scan_line);
}
