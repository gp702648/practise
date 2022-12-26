#include<stdio.h>
#include<stdlib.h>
int add(int a,int b)
{
    return a+b;
}
int main()
{


int (*p) (int a,int b);
p=add;
int b=p(5,4);
printf("%d",b);

}
