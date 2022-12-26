#include<stdio.h>
int main()
{
    void *vp;
    float a=7.77;
    vp=&a;
    int b = (int)a;
    printf("%f ",*(float*)vp);
    printf("%d",b);
}
