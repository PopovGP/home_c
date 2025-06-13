#include <stdio.h>



int main(int argc, char **argv)
{
    char c;
    char prevChar='.';
    int counter =0;
    
    while(1)
    {
        scanf("%c", &c);
      
        
      
        
        
        if (c==prevChar) 
        {
            
            counter ++;
        }
        else
        {
          //Выведем накопленные значения
          if (counter)
                printf("%c%d", prevChar, counter);
            
          prevChar = c;
          counter=1;  
        }
        
        if(c=='.') break;
        //printf("%c", c);
    }
    
    return 0;
}
    
