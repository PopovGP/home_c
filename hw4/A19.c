#include <stdio.h>

int main(int argc, char **argv)
{
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);
    
    if ((a<=0)||(b<=0)||(c<=0))
    {
        printf("%s\n", "NO");
        return 0;
    }
    
    if ((a+b<=c)||(a+c<=b)||(b+c<=a))
    {
        printf("%s\n", "NO");
        return 0;
    }
    printf("%s\n", "YES");
    return 0;
    
}
    
