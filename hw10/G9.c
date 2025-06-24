#include <stdio.h>

#define FIN "input.txt"
#define FOUT "output.txt"

#define SIZE 1000

int main(int argc, char **argv)
{
    FILE *fin = fopen(FIN, "r");

    char c;
    char res[SIZE]={0};
 
     
    FILE *fout = fopen(FOUT, "w");
    

  

     

 int flag;
    char *ptr;
    while((c=fgetc(fin))!=EOF)
    {
        if (c==' ') continue;
        
        ptr = res;
        flag = 1;
        while(*ptr)
        {
            if(c==*ptr)
            {
                flag = 0;
                
            }
            ptr++;
        }
        if(flag)
        {
            *ptr = c;
        }
        
        
      
    }
     fclose(fin);
     
     fprintf(fout, "%s", res);
     
    
    
    
    
   

    fclose(fout);
    
    return 0;
}
