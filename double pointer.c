#include<stdio.h>
int main()
{
    int a=10;
    int *ptr;
    ptr=&a;
    int **q;
    q=&ptr;
    printf("%d",**q);
}
