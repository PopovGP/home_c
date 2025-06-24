#include <stdio.h>
 
int main(void)
{
    printf("%d \n", 8);
    printf("% d \n", 8);
    printf("%+d \n", +8);
    printf("%#o \n", 8);
    printf("%#f \n", 8.);
    printf("%x   %X\n", 1197, 1197);
 
    printf("%9s %d \n", "Tom", 38);
    printf("%-9s %d \n", "Tom", 38);
 
    return 0;
}
