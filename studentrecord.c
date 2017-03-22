#include<stdio.h>
#include<string.h>
typedef struct {
                char roll[9];
                char name[20];
                int s;
                int subject_detail[4][3];
                float sg;
                } detail;
void main()
{
    int n=0,i,j,k,l,m,p;
    detail student[100];
    detail temp[1];
    printf("enter the roll number of the student:\n");
    scanf(" %s",&student[n].roll);


    do
    {
        printf("enter the name of the student :\n");
        scanf(" %[^\n]",&student[n].name);
//student[n].roll[9]='\0';
        printf("enter no of subjects does the student registered\n");
        scanf("%d",&student[n].s);
        for(i=0;i<student[n].s;i++)
        {

                printf("enter the subject number of %dth subject:\n",i+1);
                scanf("%d",&student[n].subject_detail[i][0]);
                printf("enter no of credits for this subject:\n");
                scanf("%d",&student[n].subject_detail[i][1]);
                printf("enter no of points example if ex then 10; a then 9\n");
                scanf("%d",&student[n].subject_detail[i][2]);
        }
    n++;
    printf("enter the roll number of the student:\n");
    scanf(" %[^\n]",&student[n].roll);

    }while(strcmp(student[n].roll,"000END")!=0);

    float nm=0,dm=0;
    for(j=0;j<n;j++)
    {
        for(k=0;k<student[j].s;k++)
        {
                 nm=nm+student[j].subject_detail[k][1]*student[j].subject_detail[k][2];
                 dm=dm+student[j].subject_detail[k][1];
        }
        student[j].sg=nm/dm;
    }
   // printf("%f",student[0].sg);
   for(l=0;l<n;l++)
   {
       for(m=l+1;m<n;m++)
       {
           if(student[m].sg>student[l].sg)
           {
               temp[0]=student[m];
               student[m]=student[l];
               student[l]=temp[0];
           }

           }
   }
   for(p=0;p<n;p++)
   {
      printf("%d\t",p+1);

      printf("%s\t",student[p].name);
       printf("%s\t",student[p].roll);
      printf("%f\n",student[p].sg);
   }
}













