#include <stdio.h>

int main(int argc, char ** argv)
{
    unsigned int n;
    scanf("%d", &n);
    
    unsigned int counter = 1;
    unsigned int prev1 = 1;
    unsigned int prev2 = 0;
    unsigned int sum = 0;
    printf("%d ", prev1);

    
    while(counter<n)
    {
        sum = prev1 + prev2;
        printf("%d ", sum);
        prev2 = prev1;
        prev1 = sum;
        
        counter = counter + 1;
        
        
    }
    
    printf("\n");
    return 0;
}
