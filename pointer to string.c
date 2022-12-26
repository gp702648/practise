#include<stdio.h>
#include<string.h>
int main()
{
    char n[30]="hi brigosha ";
    int b=strlen(n);
    char *ptr=n;
   // ptr=&n;

    printf("%d/n",b);
for (int i=0;i<b;i++)
    {
    printf("%c",*(ptr+i));
    }
    return 0;
}
