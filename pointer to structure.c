#include<stdio.h>
struct name{
char name[20];
int no;
};
void main()
{
    int name;
    //int ptr;
    struct name s1={"name",24};
    struct name *ptr;
    ptr=&s1;
    printf("%s %d\n",ptr->name,ptr->no);
    getchar();
}
