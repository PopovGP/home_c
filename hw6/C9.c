#include <stdio.h>


int factorial(int x)
{
    int res = 1;
    for (int i=1; i<=x; i++)
    {
        res = res * i;
    }
    
    return res; 
}

int main(int argc, char**argv)
{
    int a; 
  
    scanf("%d", &a);
    if (a<=0) return 0;
    
    printf("%d\n", factorial(a));
    
  

    return 0;
}
