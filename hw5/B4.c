#include <stdio.h>

int main(int argc, char** argv)
{
    int a;
    scanf("%d", &a);
    if (a<=0)
    {
        printf("Введите целое число!\n");
        return 1;
    }
    
    printf("%s\n", a>=100&&a<999 ?"YES":"NO");
    return 0;
}
