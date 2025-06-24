#include <stdio.h>

#define FIN "input.txt"
#define FOUT "output.txt"

#define SIZE 100

int main(int argc, char **argv)
{
    FILE *fin = fopen(FIN, "r");
    char w1[SIZE] = {0};
    char w2[SIZE] = {0};
    int res[26] = {0};
    
    
    fscanf(fin, "%s %s", w1, w2);
   
    
    char *ptr1 = w1;
    char *ptr2 = w2;
   
    while(*ptr1)
    {
        
   
        while (*ptr2)
        {
            
            if(*ptr1==*ptr2)
            {
               
                res[(int)*ptr1-97]++;
          
            }
            ptr2++;
        }
        
        ptr2 = w2;
        
            
        ptr1++;
        
    }
    
    
   
    
    FILE *fout = fopen(FOUT, "w");
    
    if (fout!=NULL)
    {
        for (int i=0; i<26; i++)
        {
            if (res[i]==1)
            fprintf(fout, "%c ", (i+97));
        }
    }
    
    
 
    
  
    fclose(fout);
    fclose(fin);
    
    return 0;
}
