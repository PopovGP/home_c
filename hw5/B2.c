#include <stdio.h>

int main(int argc, char **argv)
{
    int a,b;
    scanf("%d%d", &a, &b);
    
    if ( (a<0? a*-1:a)>100 ||  (b<0? b*-1:b)>100 )
    {
        printf("Число a или число b не должно превышать по модулю 100!\n");
        return 1;
    }
        
        
    if (!(a<=b))
    {
        printf("Число a должно быть меньше или равно числу b!\n");
        return 1;
    }
    
    for (int i=a;i<=b;i++)
    {
        printf("%d ", i*i);
    }
    return 0;
}
