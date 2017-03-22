#include<stdio.h>
#include<math.h>

void main()
{
    float dia = 45,den=116,mu=1.864;
    float Re;
    int vel,count=0;
   /* printf("%f\n",9*dia*den/mu)*/
    for(vel=9;vel<=35;vel++)
    {
        Re = dia * den * vel/ mu;
        printf( "%f\n",Re);
        count++;
    }
        printf("%d",count);

}
