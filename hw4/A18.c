#include <stdio.h>

int main(int argc, char **argv)
{
    int a,b;
    scanf("%d%d", &a, &b);
    
    printf("%s\n", a==b?"Equal":a>b?"Above":"Less");
    return 0;
}
