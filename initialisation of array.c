/*#include<stdio.h>
int main ()
{
    int arr[10]={10,20,30,40,50,60};

        printf(" array elements aray:-");
    for(int i=0;i<10;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
*/
#include<stdio.h>
int main ()
{
    int arr[10];
    int i;
    printf("enter the elements of array:-");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);

    }
    for(i=0;i<10;i++)
    {
        printf(" elements of array are %d\n",arr[i]);
    }
    return 0;
}








