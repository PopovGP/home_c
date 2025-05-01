#include <stdio.h>

int main(int argc, char**argv)
{
    unsigned int a;
    scanf("%3d", &a);
    printf("%d\n",a/100+ (a-(a/100)*100)/10+a%10);
    return 0;
}
