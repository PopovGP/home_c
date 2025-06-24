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
       
int main(int argc, char **argv)
{
    FILE *fin = fopen(FIN, "r");
    FILE *fout = fopen(FOUT, "w");
    
    char buf[SIZE]={0};
    char res[SIZE]={0};
    char c;
     
    while((c=fgetc(fin))!=EOF)
    {
    
        if(c=='\n'||c=='\r') continue;
        addToBuffer(buf, c);
    
    }
    

    for(int i=0; i<actualBifferSize; i++)
        for(int j=0; j<actualBifferSize; j++)
        
            if (buf[i]<buf[j])
            {
                int temp = buf[j];
                buf[j] = buf[i];
                buf[i] = temp;
            }
     
      
  

   //for(int i=0;i<actualBifferSize;i++) printf("%c",buf[i]); printf("\n");
     
    

   char a,b;
    
    int letterCounter=1;
    int size = 0;
    int counter = 0;
     c = 0;
   
    
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
                res[counter] = a;
                res[SIZE-1-counter] = a;
                counter++;
                size +=2;
        
                
            }
            else
            {
             
                if (!c) c = a;
      
                letterCounter = 1;
                a = b;
            }
            
        }
        

        
        letterCounter = letterCounter==1?2:1;
        
 
        if (size > SIZE) break;
        
       

    }
    

    
    counter = 0;
    for(int i=0; i<SIZE; i++) 
    {
        if(res[i])
        {
            
            if (c&&(counter==size/2))  
            { 
                fprintf(fout, "%c", c);
                
            }
            fprintf(fout,"%c", res[i]);
            counter++;
        }
    }
    
    if(counter==0) fprintf(fout, "%c", c?c:a);
    
    
    
    fclose(fin);

    fclose(fout);
    
    return 0;
}
