#include <stdio.h>

int main(int argc, char**argv)
{
    char c;
    while(1)
    {
        scanf("%c", &c);
        if (c=='.') break;
        
        if ((c>=0x41)&&(c<=0x5A))
        {
            c = c + 32;
        }
        printf("%c", c);
        
    } 
    return 0;
}
        
