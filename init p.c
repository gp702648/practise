#include<stdio.h>
int main()
{
    int a=100;
    int *ptr;
    ptr=&a;
    printf(" value of variable %d\n",*ptr);
     printf(" address of variable is %d\n",ptr);
}
