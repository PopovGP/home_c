#include <stdio.h>

#define FIN "input.txt"
#define FOUT "output.txt"

#define SIZE 10000

int main(int argc, char **argv)
{
    FILE *fin = fopen(FIN, "r");

    char c;
 
    
     
     int i = 0;
     int j = 0;
    while((c=fgetc(fin))!=EOF)
    {
        if ((c>='a')&&(c<='z')) i++;
        if ((c>='A')&&(c<='Z')) j++;
        
      
    }
     fclose(fin);
    
    
    
    
    
    FILE *fout = fopen(FOUT, "w");
    

    fprintf(fout, "%d %d", i, j);

    fclose(fout);
    
    return 0;
}
