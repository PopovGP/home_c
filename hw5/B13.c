#include <stdio.h>

int main(int argc, char**argv)
{
    int a; 
    scanf("%d", &a);
    
    
    int odd = 0;
    int even = 0;
        
        while (a)
        {
     
             
            if (0 != (a%10)%2)
            {
                odd = odd + 1;
            }
            else
            {
                even = even + 1;
            }
 

            a = a/10;
           
            
     
        }
        
    

    
    printf("%d %d\n",  even, odd );
    return 0;

}
