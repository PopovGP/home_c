#include <stdio.h>

int main(int argc, char**argv)
{
    int a; 
    scanf("%d", &a);
    
        

    int number = 0;

    
    

        
        while (a)
        {

     
             
            if (9 == a%10)
            {
                number +=1;
            }
 

            a = a/10;
            
     
        }
        
    

    
    printf("%s\n", number == 1? "YES" : "NO");
    return 0;

}
