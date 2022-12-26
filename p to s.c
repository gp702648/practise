#include<stdio.h>
struct name{
char name[40];
int a;
float c;
};
void main()
{
    struct name s1={"hi",66,67.6666};
    struct name  *ptr;
    ptr=&s1;
    printf("%s ",ptr->name);
     printf("%d ",ptr->a);
      printf("%f ",ptr->c);

}
