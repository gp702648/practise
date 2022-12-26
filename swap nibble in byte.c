#include <stdio.h>
int main()
{
     char data = 67;
    //swapping nibbles
    data = (((data & 0x0F)<<4) | ((data & 0xF0)>>4));
    printf("%x\n", data);
    return 0;
}
