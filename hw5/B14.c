#include <stdio.h>

int main(int argc, char**argv)
{
    int a; 
    int rez = 0;

    while(1)
    {
        scanf("%d", &a);
        if (a==0) break;
        rez = rez + 1;
        
    }
    
    printf("%d\n", rez);
    
  
    return 0; 

}
