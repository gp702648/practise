#include<stdio.h>
int main()
{
    char arr[]="hi pranav dont talk with rashmi";
    int lenth=sizeof (arr)/sizeof arr[0];
    for(int i=0;i<lenth;i++)
    {
        printf("%c \n",arr[i]);
    }
    printf("reverse array elements are:-");
    for(int i=lenth-1;i>=0;i--)
    {
        printf(" %c",arr[i]);
    }


}
