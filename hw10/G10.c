#include <stdio.h>

#define FIN "input.txt"
#define FOUT "output.txt"

#define SIZE 1000

int main(int argc, char **argv)
{
    FILE *fin = fopen(FIN, "r");

    char res[SIZE]={0};
    char max_word[SIZE]={0};
 
    
     
     int max = 0;
     int len = 0;
     char *ptr;
     char *ptr_max;
     
     
    while(fscanf(fin,"%s", res)!=EOF)
    {

     
      ptr=res;
      len=0;
      while(*ptr)
      {
          len++;
          ptr++;
        }

         
         if (len>max)
         {
             max = len;
             ptr=res;
             ptr_max = max_word;
             while(*ptr)
        {
           
           *ptr_max = *ptr;
           ptr_max++;
           ptr++;
        
          
        }
        
    }
             
      
    
        
      
    }
     fclose(fin);
    
    
    
    
    
    FILE *fout = fopen(FOUT, "w");
    

    fprintf(fout, "%s", max_word);

    fclose(fout);
    
    return 0;
}
