#include<stdio.h>
void main()
{
    char scan_line[100];
    printf("enter the line to scan\n");
    scanf("%[^\n]",scan_line);
    printf("%s",scan_line);
}
