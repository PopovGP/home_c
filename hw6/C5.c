#include <stdio.h>


int f(int x)
{
    int res = 0;
    for (int i=1; i<=x; i++)
    {
        res = res + i;
    }
    
    return res; 
}

int main(int argc, char**argv)
{
    int a; 
  
    scanf("%d", &a);
    if (a<=0) return 0;
    
    printf("%d\n", f(a));
    
  

    return 0;
}
