#include<stdio.h>
int add(int a,int b)
{
    int sum=10;
    sum=a+b;
    if(a==0||b==0)
        return sum;
        //printf("sum=%d\n",sum);
    add(a-1,b-1);
    printf("sum=%d\n",sum);




}
void main()
{

    int r = 0;
    r=add(9099,2);

    printf("%d",r);
}
