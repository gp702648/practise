#include<stdio.h>
int main()
{
    char ch[20]="hello world";
    char ch2[20];
    char ch3[20]="beast";
    strcpy(ch2,ch);
    strcat(ch,ch2);
    printf("%s\n",ch);
    printf("%s",ch2);
}
