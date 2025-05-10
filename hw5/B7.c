#include <stdio.h>

int main(int argc, char**argv)
{
    int a; 
    scanf("%d", &a);
    
        

    int number = a;
    int saved;
    
    
    while(a) {
        
        number = a%10;

        a = a/10;
        saved = a;
  
        
        while (a)
        {

 
             
            if (number == a%10)
            {
                printf("YES\n");
                return 0;
            }
     

            a = a/10;
            
     
        }
        

        a = saved;
    
    }

    
    printf("NO\n");
    return 0;

}
