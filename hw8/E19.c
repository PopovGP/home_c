#include <stdio.h>

int main(int argc, char **argv)
{
    long long int N;
  
    int counter = 0;
    scanf("%lld", &N);
    
    
    
    long long int digits = 10;
    
    while(1)
    {
        printf("%lld \n", N/digits);
        if (N/digits==0)
        {
            digits = digits / 10;
            break;
        }
            
        counter ++;
        digits = digits * 10;
        if (digits>100000000000) break;
        
    }
        
    while(1)
    {
        printf("%llu %llu\n", N/digits, N%digits);
        digits = digits/10;
        if (digits == 1) break;
    }
    
    return 0;
}
