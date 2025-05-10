#include <stdio.h>

int main(int argc, char**argv)
{
    int a;
    scanf("%d", &a);
    if (a>100)
    {
        printf("Введенное число не может превышать 100!\n");
        return 1;
    }
    for (int i=1;i<=a;i=i+1)
    {
        printf("%d %d %d\n", i, i*i, i*i*i); 
    }
    return 0;
}
