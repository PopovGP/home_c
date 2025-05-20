#include <stdio.h>

char toUpper(char c)
{
    if ((c>='a')&&(c<='z'))
        
            c = c - 32;
            
    return c;
}
    
int main(int argc, char**argv)
{
    char c;
    while(1)
    {
        scanf("%c", &c);
        if (c=='.') break;
        
        c = toUpper(c);
        
        
        printf("%c", c);
        
    } 
    return 0;
}
        
