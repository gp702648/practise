#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the the size of an array:-");
    scanf("%d",&n);
    int arr[n];
    int a=0;
    printf("enter the elements of array:-");
    for(i=0;i<n;++i)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;++i)
    {
        for(j=i+1;j<n;++j)
        {
            if(arr[i]<arr[j])
            {
                a=arr[i];
                arr[i]=arr[j];
                arr[j]=a;
            }
        }

    }
    for(i=0;i<n;++i)
    {
        printf("%d ",arr[i]);
    }
}
