#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    char r[100];
    int i,length,j=0;
    printf("enter the string\n");
    gets(s);
     length=strlen(s)-1;
    strcpy(r,s);

            strrev(r);


    if(strcmp(s,r)==0)
    {
        printf("string is pallindrome %s %s",s,r);
    }
    else
    {
        printf(" not a pallindrome");
    }
}

