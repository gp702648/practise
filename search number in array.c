#include<stdio.h>
int main()
{
    int i,n,key;
    int found=0;
    printf("enter the number of elemnts in array:-");
    scanf("%d",&n);
   int arr[n];
    printf("enter the number of elements in array :-");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the number to be searched");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {


             found=1;
        break;
        }
    }
    if(found ==1)
    {
        printf("%d is found at index number %d",key,i+1);
    }
    else
        {
            printf("not found %d",key);
        }
}
