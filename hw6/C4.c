#include <stdio.h>


int f(int x)
{

    if (x>=-2 && x<2) return x*x;
    if (x>=2) return x*x+4*x+5;
    if (x<-2) return 4;
    
    return 0; 
}

int main(int argc, char**argv)
{
    int a; 
    int b;
    int res = 0;

    while(1)
    {
        scanf("%d", &a);
        if (a==0) break;
        b = f(a);
        res = b > res ? b : res;
        
    }
    
    printf("%d\n", res);
    
  

    return 0;
}
