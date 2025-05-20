#include <stdio.h>


unsigned long long f(int x)
{
    unsigned long long res = 1;
    for (int i=2; i<=x; i++)
    {
        
        res = res * 2;
    }
    
    return res; 
}

int main(int argc, char**argv)
{
    int a; 
  
    scanf("%d", &a);
    if (a<=0 || a>64) return 0;
    
    printf("%llu\n", f(a));
    
  

    return 0;
}
