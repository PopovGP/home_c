#include <stdio.h>

int main(int argc, char**argv)
{
    int a; 
    scanf("%d", &a);
    
    

        
        while (a)
        {
     
             
            if (0 != (a%10)%2)
            {
                printf("%s\n",  "NO" );
                return 0;
            }
 

            a = a/10;
           
            
     
        }
        
    

    
    printf("%s\n",  "YES" );
    return 0;

}
