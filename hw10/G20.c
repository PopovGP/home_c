#include <stdio.h>

#define FIN "input.txt"
#define FOUT "output.txt"

#define SIZE 1000

int actualBifferSize=0;

void addToBuffer(char *arr, char c)
{
    arr[actualBifferSize] = c;
    actualBifferSize++;
    
}

char * is_palindrom(char *buf)
{
    

    for(int i=0; i<actualBifferSize; i++)
        for(int j=0; j<actualBifferSize; j++)
        
            if (buf[i]<buf[j])
            {
                int temp = buf[j];
                buf[j] = buf[i];
                buf[i] = temp;
            }
     
      
  

    char a,b;
    
    int letterCounter=1;
    int size = 0;
    
   
   
    
    for(int i=0; i<actualBifferSize; i++) 
    {
      
        if (letterCounter==1)
        {
            a = buf[i]; 
       
          
        }
        else
        {
            b = buf[i];
  
            
        }
        
        
        if (letterCounter==2)
        {
            
            if (a==b) //у нас пара
            {
              
                size +=2;
        
                
            }
            else
            {
             
              
      
                letterCounter = 1;
                a = b;
            }
            
        }
       
        

        
        letterCounter = letterCounter==1?2:1;
        
 
      //  if (size > SIZE) break;
        
       

    }
    


    
    if (size==actualBifferSize||actualBifferSize-size==1) return "YES";

    
    
    
    
    return "NO";
}
       
int main(int argc, char **argv)
{
    FILE *fin = fopen(FIN, "r");
  //  FILE *fout = fopen(FOUT, "w");
    
    char buf[SIZE]={0};

    char c;
     
    while((c=fgetc(fin))!=EOF)
    {
    
        if(c>='a'&&c<='z') 
        {
            addToBuffer(buf, c);
        }
    
    }


    fclose(fin);
    
    printf("%s",is_palindrom(buf)); 
    

 //   fclose(fout);
    
    return 0;
}
