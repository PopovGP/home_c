#include <stdio.h>

#define FIN "input.txt"
#define FOUT "output.txt"

#define SIZE 1000

int main(int argc, char **argv)
{
    FILE *fin = fopen(FIN, "r");

    char c;
    
     FILE *fout = fopen(FOUT, "w");
    while((c=fgetc(fin))!=EOF)
    {
      switch (c){
      case 'a': c++; break;
      case 'b': c--; break;
      case 'A': c++; break;
      case 'B': c--;
  }
     
     fprintf(fout, "%c", c);
        
    }
   
   
  
   
    
  
    fclose(fout);
    fclose(fin);
    
    return 0;
}
