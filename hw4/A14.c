#include <stdio.h>

int main(int argc, char **argv)
{
    unsigned int num, max, b,c;
    scanf("%3d", &num);
    
    max = num/100;
    b = num%10;
    c = (num-max*100)/10;
    
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
   
    printf("%d\n", max );
    
    return 0;
}
