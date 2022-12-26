#include<stdio.h>
int maxdiffrence(int arr[],int size)
{
    int i,j;
int max=  arr[1]-arr[0];
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
    {
       if(arr[j]-arr[i]>max)
            max=arr[j]-arr[i];
    }

}
return max;
}
int main()
{
    int max;
    int arr[5]={10, 15, 90, 200, 110};
    printf("%d",maxdiffrence(arr,5));
    //getchar();
}
