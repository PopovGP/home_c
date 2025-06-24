#include <stdio.h>

#define FIN "input.txt"
#define FOUT "output.txt"

#define SIZE 1000

int main(int argc, char **argv)
{
    FILE *fin = fopen(FIN, "r");

    char res[SIZE]={0};
   
 
    
     
     int max = 0;
  
     char *ptr;
     
     
     
    while(fscanf(fin,"%s", res)!=EOF)
    {

     
      ptr=res;
     
      while(*ptr)
      {
        
          ptr++;
        }
        
        ptr--;
        
       // printf("dvdv %c\n", *(ptr--));
        if (*(ptr--)=='a') max++;
        

       
        
    }
             
      
    
        
      
    
     fclose(fin);
    
    
    
    
    
    FILE *fout = fopen(FOUT, "w");
    

    fprintf(fout, "%d", max);

    fclose(fout);
    
    return 0;
}
