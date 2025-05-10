#include <stdio.h>

int main(int argc, char**argv)
{
    int a; 
    scanf("%d", &a);
    
    
    int previous = a%10;
    a = a/10;
        
        while (a)
        {
     
 
             
            if (previous <= a%10)
            {
                printf("%s\n",  "NO" );
                return 0;
            }
 
            previous = a%10;
            
            a = a/10;
           
            
     
        }
        
    

    
    printf("%s\n",  "YES" );
    return 0;

}
