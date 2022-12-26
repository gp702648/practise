#include<stdio.h>
void mm(int arr[],int len,int *max,int *min)
{
    *max=*min=arr[0];
    int i=0;
    for(i=1;i<len;i++)
    {
        if(arr[i]>*max)
            *max=arr[i];
        if(arr[i]<*min)
            *min=arr[i];
    }
}
void main()
{
    int max;
    int min;
int a[]={12,13,14,16,17,181,19};
int len=sizeof(a)/sizeof(a[0]);
mm(a,len,&max,&min);
printf("max = %d,min = %d",max,min);
//return 0;
}
