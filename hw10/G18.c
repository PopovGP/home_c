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

void clearBuffer(char *arr)
{
    char *ptr = arr;
    while(*ptr)
    {
        *ptr = '\0';
        ptr++;
    }
    actualBifferSize = 0;
}
     
            
int main(int argc, char **argv)
{
    FILE *fin = fopen(FIN, "r");
     char c;
 
     int found = 0;
     int delAllSpaces = 1;

     
      FILE *fout = fopen(FOUT, "w");
      
    while((c=fgetc(fin))!=EOF)
    {
        //charToPut = c;
        
        if (c==' ')
        {
            if(!delAllSpaces)
            {
            if (!found)  
            {
                found = 1;
                fputc(c,fout);

            }
      
        }
            
        }
        else if(c=='.')
        {
            delAllSpaces = 0;
            fputc(c,fout);
            
        }
        else
        {
            delAllSpaces = 0;
            found = 0;
            fputc(c,fout);
            
                
        }
        

        

 
    }
    

    
    
     fclose(fin);
     
    fclose(fout);
    
    return 0;
}
