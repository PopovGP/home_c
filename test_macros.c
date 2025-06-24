#include <stdio.h>

#define SWAP(type, a , b) do{type t = a; t=b; b=t;} while(0)

int main(void)
{
    int t=5, b=7;
    if (t<b)
        SWAP(int, t, b);
    else
        t = 1000;
    printf("t= %d b= %d\n", t, b);
    
    return 0;
}
