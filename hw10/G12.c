#include <stdio.h>

#define FIN "input.txt"
#define FOUT "output.txt"

#define SIZE 1000

     

int main(int argc, char **argv)
{
    FILE *fin = fopen(FIN, "r");

    char res[SIZE]={0};
 


     
    FILE *fout = fopen(FOUT, "w");
    while(fscanf(fin,"%s", res)!=EOF)
    {

        
         fprintf(fout, "%s\n", res);
        
    }
             
      
    
        
      
    
     fclose(fin);
    
    
    
    
    

    

   

    fclose(fout);
    
    return 0;
}
