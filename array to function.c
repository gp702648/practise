#include<stdio.h>
int arra(int n[],int m);
int  main()
{
    int n[5];
    arra(n,5);
    return 0;

}
int arra(int n[],int m)
{
    int i;
    printf(" enter the elements");
    for(i=0;i<m;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<m;i++)
    {
        printf("%d ",n[i]);
    }
}

