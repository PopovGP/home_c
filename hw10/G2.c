#include <stdio.h>

#define FIN "input.txt"
#define FOUT "output.txt"

int main(int argc, char **argv)
{
    FILE *fin = fopen(FIN, "r");
    int N;
    fscanf(fin, "%d", &N);
    
    FILE *fout = fopen(FOUT, "w");
    
    char c;
    
    int offset = 1;
    int i = 1;
    int j = 1;
    
    while(offset<=N)
    
    {
       
       if(offset%2==0) //четное число
       {
           if (i>9) i=2;
            c = i + 48;
            i++;
       }
       else
       {
           c = j  + 47+17;
           j++;
            i++;
       }
       fputc(c, fout);

       
       offset +=1;
    }
        
    fclose(fout);
    fclose(fin);
    
    return 0;
}
