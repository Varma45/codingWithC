#include<stdio.h>
#include<math.h>
#define sqr(x) ((x)*(x))
void collinear(float x1,float y1,float x2,float y2,float x3,float y3);
void boundbox(float x1,float y1,float x2,float y2,float x3,float y3);
float max(float a,float b, float c);
float min(float a,float b, float c);
void rightangle(float x1,float y1,float x2,float y2,float x3,float y3);
void area(float x1,float y1,float x2,float y2,float x3,float y3);
void main()
{
  float x1,y1,x2,y2,x3,y3;
  printf("enter the three coordinates x1,y1,x2,y2,x3,y3\n");
  scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);
  collinear(x1,y1,x2,y2,x3,y3);
  boundbox(x1,y1,x2,y2,x3,y3);
  rightangle(x1,y1,x2,y2,x3,y3);
  area(x1,y1,x2,y2,x3,y3);
}
void collinear(float x1,float y1,float x2,float y2,float x3,float y3)
{
    if(((y2-y1)/(x2-x1))==((y3-y2)/(x3-x2)))
    {
        printf("\nentered points are collinear\n");
    }
    else
        printf("\nthe points are not collinear\n");
}

void boundbox(float x1,float y1,float x2,float y2,float x3,float y3)
{
    float a1,a2,b1,b2;
    a1=min(x1,x2,x3);
    b1=min(y1,y2,y3);
    a2=max(x1,x2,x3);
    b2=max(y1,y2,y3);
    printf("\n(%.2f,%.2f);(%.2f,%.2f);(%.2f,%.2f);(%.2f,%.2f) are the co ordinates of bounding box B|\n",a1,b1,a2,b1,a1,b2,a2,b2);
    }
void rightangle(float x1,float y1,float x2,float y2,float x3,float y3)
  {
      float s1,s2,s3;
      s1=(y2-y1)/(x2-x1);
      s2=(y3-y1)/(x3-x1);
      s3=(y3-y2)/(x3-x2);
      if(((s1*s2)==-1)||((s1*s3)==-1)||((s2*s3)==-1))
      {
          printf("\nthe triangle is right\n");
      }
      else
      {
          printf("\nnot a right");
      }
  }

void area(float x1,float y1,float x2,float y2,float x3,float y3)
{
    float s,a,b,c,area;
    a=sqrt(sqr(x2-x1)+sqr(y2-y1));
    b=sqrt(sqr(x3-x2)+sqr(y3-y2));
    c=sqrt(sqr(x3-x1)+sqr(y3-y1));
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\n%f is the area\n",area);
}

float max(float a,float b, float c)
{
    float max=a;
    if(b>=max)
    {
        max=b;
    }
    if(c>=max)
    {
        max=c;
    }
    return(max);
}
float min(float a,float b, float c)
{
    float min=a;
    if(b<=min)
    {
        min=b;
    }
    if(c<=min)
    {
        min=c;
    }
    return(min);
}

