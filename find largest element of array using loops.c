#include<stdio.h>
int main()
{
    int n,i,max,min;
    printf("enter the size of an array");
    scanf("%d",&n);
    int arr[n];
    printf("entet the elements of array:-");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
            if(arr[i]<min)
                min=arr[i];
    }
    printf(" the largest element in array:-%d",max);
    printf(" the largest element in array:-%d",min);
return 0;
}
