#include<stdio.h>
#include<string.h>
#include<math.h>
 struct lift {
        int max_snatch ;
        int max_cj ;
        char name[20];
        struct lift *next ;
} ;
void main()
{
    struct lift p1,p2,p3,p4,p5;
    struct lift *traverse;
    p1.max_snatch = 65;
    p1.max_cj = 85;
    printf("%s %d %d ",p1.name,p1.max_snatch,p1.max_cj);

}
