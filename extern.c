#include<stdio.h>
void add()
{
    printf("sum=%d",a+b);
}
extern int a,b;
void main()
{
    a=5,b=8;
    add();

}

