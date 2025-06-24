#include <stdio.h>

#define FIN "input.txt"
#define FOUT "output.txt"





                
int main(int argc, char **argv)
{
    FILE *fin = fopen(FIN, "r");
    FILE *fout = fopen(FOUT, "w");
    
    int dotPostion = 0;
    int slashPosition = 0;
    char c;
  
  
     
    while((c=fgetc(fin))!=EOF)
    {
        
        if (c=='.')
        {
            dotPostion = ftell(fin);//fseek(fin, 0, SEEK_CUR);
        }
        
        if (c=='/')
        {
            slashPosition = ftell(fin);// fseek(fin, 0, SEEK_CUR);
        }
        
        
        if (c=='\n'||c=='\r') continue;
        
       
       
    }
    
   // printf("dotpos = %d, slashpos = %d\n", dotPostion, slashPosition);
    
    
    
    
    fseek(fin, 0, SEEK_SET);
    int curPostion = 0;
    
      while((c=fgetc(fin))!=EOF)
    {
        
 
        if (c=='\n'||c=='\r') continue;
        curPostion = ftell(fin);
        
        if (dotPostion>slashPosition)//есть какое-то расширение
        {
        
            if (curPostion == dotPostion)
            {
            fputs(".html", fout);
            break;
        }
        
        }
        
        
        fputc(c, fout);
       
    }
    
    if (dotPostion==0) 
    {
        fputs(".html", fout);
     
        
    }
    else
     
        if (dotPostion<slashPosition)//есть какое-то расширение
        {
        
            fputs(".html", fout);
           
        }
        
      
        
    
     fclose(fin);
     
  


    fclose(fout);
    
    return 0;
}
