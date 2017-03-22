#include<stdio.h>
#include<math.h>
float *return3(float values[],int n);
void main()
{
    int n,i,j;
    float *ptr;
    printf("enter no of values\n");
    scanf("%d",&n);
    float values[n];
    printf("enter the values\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&values[i]);
    }
    ptr=return3(values,n);
    for(j=0;j<3;j++)
    {
        printf("%f\n",*(ptr+j));
    }
}
float *return3(float values[],int n)
{
    static float three[3];
    float temp,avg=0;

    int i,j,k;
    for(i=0;i<n;i++)
    {
   //    printf("%f\n,,,%f",avg,values[i]);
       avg=avg+values[i];
    }
    avg=avg/n;
    three[2]=avg;
  //  printf("%f\t%f\n",avg,three[0]);
   for(j=0;j<n;j++)
   {
       for(k=j+1;k<n;k++)
       {
          if(values[k]>values[j])
          {temp=values[k];
           values[k]=values[j];
           values[j]=temp;
          }
       }
   }
    three[0]=values[1];
    three[1]=values[n-2];
    return &three[0];

}
