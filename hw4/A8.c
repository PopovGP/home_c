#include <stdio.h>

int main(int argc, char **argv)
{
    int a,b,c;
   
    
    scanf("%d%d%d", &a, &b, &c);
    int max = a;
    
    if (max>b)
    {
        if (max>c);
        else max = c;
    }
    else
    {
        max = b;
        if (max>c);
        else max = c;
    }
        
    
    printf("%d", max);
    return 0;
}
