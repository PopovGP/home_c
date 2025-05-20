#include <stdio.h>

int modulus(int num)
{
    if (num<0) return num*-1;
    return num;
}

int main(int argc, char**argv)
{
    int a;
    scanf("%d", &a);
    printf("%d\n", modulus(a));
    return 0;
}
