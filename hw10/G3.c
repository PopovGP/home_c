#include <stdio.h>

#define FIN "input.txt"
#define FOUT "output.txt"

#define SIZE 1000

int main(int argc, char **argv)
{
    FILE *fin = fopen(FIN, "r");
    char s[SIZE] = {0};
   // fscanf(fin, "%s", s);
    
    int len = 0;
    char res;
    while(1) //fscanf(f, "%s", (char *)&s)==1)
    {
       // res = 
       res = fgetc(fin);
       if (res == EOF) break;
       if (res!='\n')
       {
       s[len] = res;
       len++;
   }
    }
    
    
   
    
    FILE *fout = fopen(FOUT, "w");
    
    for (int i=0; i<len-1; i++)
    {
        if (s[i]==s[len-1])
        {
           // printf("%c - %c", s[i], s[len-1]);
            fprintf(fout, "%d ", i);
        }
    }
    
    
 
    
  
    fclose(fout);
    fclose(fin);
    
    return 0;
}
