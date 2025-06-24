#include <stdio.h>

#define FIN "input.txt"
#define FOUT "output.txt"

#define SIZE 100

     

int main(int argc, char **argv)
{
    FILE *fin = fopen(FIN, "r");

    char f[SIZE]={0};
    char n[SIZE]={0};
    char p[SIZE]={0};
    
 


     
    FILE *fout = fopen(FOUT, "w");
    
   fscanf(fin,"%s %s %s", f, n, p);
    

        
         fprintf(fout, "Hello, %s %s!", n, f);
        
    
             
      
    
        
      
    
     fclose(fin);
    
    
    
    
    

    

   

    fclose(fout);
    
    return 0;
}
