#include<stdio.h>

static inline int max(int a, int b)
{
    return (a>b)? a:b;
}
int main()
{

    printf("%d",max(5,6));
    //max(a,b);
    return 0;
}
