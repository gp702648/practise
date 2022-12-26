#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter the size of an array");
    scanf("%d",&n);
    int arr[n];
    printf("entet the elements of array:-");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   for(i=0;i<n;i++)
   {
       sum=sum+arr[i];
   }
   printf("the sum of elements in array is %d",sum);
}
