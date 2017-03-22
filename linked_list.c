#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<malloc.h>
//
 struct stud {
        char name[20];
        int roll;
        int age;
        struct stud *next;
                };
typedef struct stud node ;
    node *head;

void display (node *);
node *create_list()
{
    node *head,*p;
    int i,N;
    printf("enter no.of items\n");
    scanf("%d",&N);
    p = head;
    for(i=1;i<=N;i++)
    {
        if(i==1)
        {
          head = (node *)(malloc(sizeof(node)));
          p = head;
        }
        else
        {
            p->next = (node *)(malloc(sizeof(node)));
            p = p->next;
        }
        printf("enter the name roll and age of student : %d\n",i);
        scanf("%s%d%d",p->name,&p->roll,&p->age);

    }
    p->next = NULL ;
    return (head);
}
main()
{
    node *head;
    head = create_list();
    display(head);
}

void display(node *head)
{

    int i=1;
    node *p;
    p = head ;
    while(p->next!=NULL)
    {
        printf("student: %d\nName:%s\tRoll:%d\tAge:%d\n\n",i,p->name,p->roll,p->age);
        p= p->next;
        i++;
    }
}




