#include <stdio.h>

int main(int argc, char **argv)
{
    int a;
    scanf("%d", &a);
    
    if (a<0) 
    {
        printf("Необходимо ввести целое число, большее или равное нулю!");
        return 1;
    }
    

        
    int sum = 0;

    while (a)
    {
 
        sum = sum + a%10;
        a = a/10;
        
 
    }

    printf("%d\n",sum);
    return 0;
}
