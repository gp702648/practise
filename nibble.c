#include<stdio.h>
void main()
{
    int byte = 0,n=0;
    printf("Enter a byte in hex\n");
    scanf("%x",&byte);
    int higher_nibble = ((byte<<4)&0x0f);
    int lower_nibble = byte&0x0f;
    printf("Enter 0 for lower or 1 for higher nibble");
    scanf("%d",&n);
    if(n==0)
    {
        printf("%x",lower_nibble);
    }
    else
    {
        printf("%x",higher_nibble);
    }
}
