#include<stdio.h>

int main()
{
    int size,pos,i,j,n;
    int temp;
    printf("enter the size of elements");
    scanf("%d",&n);
    printf("enter the elements of array:-");
    int arr[n];
    for(i=0;i<n;++i)

        scanf("%d",&arr[i]);
        {

     for(i=0;i<n;++i)
     {
        for(j=i+1;i<n;++j)
        {
            if(arr[i]>arr[j])
            {


             temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
     }
     }
      printf("Sorted list is \n");
        for (i = 0; i < n; i++)
        {
            printf("%d\n",arr[i]);
        }


}
