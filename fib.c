#include<stdio.h>
int main()
{
    int a=0,b=1,i,n;
    int res;
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        res=a+b;
        printf("%d\t",res);
        a=b;
        b=res;
    }
}

