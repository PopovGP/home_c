#include <stdio.h>

#define FIN "input.txt"
#define FOUT "output.txt"

#define SIZE 1000

int main(int argc, char **argv)
{
    FILE *fin = fopen(FIN, "r");

    char c;
    char res[SIZE] = {0};
    
     
     int i = 0;
    while((c=fgetc(fin))!=EOF)
    {
        res[i] = c;
        i++;
    }
     fclose(fin);
    
    i--;
    
    
    
    FILE *fout = fopen(FOUT, "w");
    for (int j=0; j<=i/2; j++)
    {
       
        if (res[j]!=res[i-1-j])
        {
            fprintf(fout,"%s", "NO");
            return 0;
        }
    }

    fprintf(fout, "%s", "YES");

    fclose(fout);
    
    return 0;
}
