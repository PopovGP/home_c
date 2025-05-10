#include <stdio.h>

int main(int argc, char**argv)
{
    int a; 
    scanf("%d", &a);
    
    
    int sum = 0;
        
        while (a)
        {
            sum = sum + a%10;
             
         
 

            a = a/10;
           
            
     
        }
        
    

    
    printf("%s\n", sum==10?"YES":"NO" );
    return 0;

}

