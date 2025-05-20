#include <stdio.h>


void print_simple(int n)
{
    int res;
    int remainder;
    int x = n;
    
    
    while(x!=1)
    
    for (int i=2; i<=x; i++)
    {
        remainder = x % i;
        res = x / i;
       
        if (remainder == 0) 
        {
            printf("%d ", i);
            x = res;
            break;
        }
    }
    
    
}

int main(int argc, char**argv)
{
    int a; 
  
    scanf("%d", &a);
    if (a<=0) return 0;
    
    print_simple(a);
    
  

    return 0;
}
