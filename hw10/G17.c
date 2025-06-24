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
     char buf[SIZE+1]={0};
     int found = 0;
     char charToPut=0;
     
      FILE *fout = fopen(FOUT, "w");
      
    while((c=fgetc(fin))!=EOF)
    {
        //charToPut = c;
        
        if ((c>='A'&&c<='Z')||(c>='a'&&c<='z'))
        {
            if (!found)  
            {
                found = 1;
            
                charToPut = c;
                //addToBuffer(buf, c);
            }
            else
            {
                fputc(c,fout);
                fputs(buf, fout);
                fputc(charToPut,fout);
                
                clearBuffer(buf);
                
                found = 0;
                charToPut = 0;
                
            }
        }
        else
        {
            if(found)
            {
                addToBuffer(buf, c);
            }
            else fputc(c,fout);
            
                
        }
        
        //fputc(charToPut,fout);
        

 
    }
    
    if (charToPut) fputc(charToPut,fout);
    fputs(buf, fout);
    
    
    fclose(fin);
     
    fclose(fout);
    
    return 0;
}
