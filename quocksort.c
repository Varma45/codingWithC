#include<stdio.h>
void quick(int arr[],int start,int end);
int partition (int parr[],int start, int end);
int main()
{
    int a[6]={23,42,4,15,8,16};
    quick(a,0,6);
    int i;
    for(i=0;i<6;i++)
    {
        printf("%d\t",a[i]);
    }
}


int partition(int arr[],int start,int end)
{
    int i,j,temp,pindex=start;
    for(i=start;i <end ;i++)
    {
        if(arr[i]<=arr[end])
        {
            temp = arr[i];
            arr[i]= arr[pindex];
            arr[pindex]=temp;
            pindex++;
        }
    }
    temp = arr[end];
    arr[end]=arr[pindex];
    arr[pindex]=temp;
    return pindex;
}
void quick(int arr[],int start, int end)
{

    int pindex;
    if(start < end)
    {
        pindex =partition(arr,start,end);
        quick(arr,start,pindex-1);
        quick(arr,pindex+1,end);
    }

}
