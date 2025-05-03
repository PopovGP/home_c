#include <stdio.h>

int main(int arhc, char **argv)
{
    int a,b,c,d,e;
    scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
    int max;
    max = a>b? a:b;
    max = max>c? max:c;
    max = max>d? max:d;
    max = max>e? max:e;
    
    printf("%d", max);
    return 0;
}
