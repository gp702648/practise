#include<stdio.h>
#include<string.h>
int main()
{
    char u[20]="hih hellooooo",ch;
    int l=strlen(u),i,j,count=1,max=0;
    for(i=0;i<l;i++)
    {
        count=1;
        for(j=i+1;j<l;j++)
        {
            if(u[i]==u[j])
            {
                 count++;
            }
            if((count)>max)
            {
                max=count;
                ch=u[j];
            }
        }
    }
    printf(" the maximum occuring character in a string %d times %c",max,ch);
}
