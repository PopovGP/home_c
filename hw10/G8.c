#include <stdio.h>

#define FIN "input.txt"
#define FOUT "output.txt"

#define SIZE 10000

int main(int argc, char **argv)
{
    FILE *fin = fopen(FIN, "r");

    char c;
    int res[SIZE];
    int counter =0;
 
    
     
     int i = 0;
     int j = 0;
     int number = 0;
     int isDigit = 0;
     
    while((c=fgetc(fin))!=EOF)
    {
        if ((c>='0')&&(c<='9'))
        {
            number  = number*10 + (c-48);
            isDigit = 1;
            
        }
        else
        {
  
            if (isDigit)
            {
                res[counter] = number;
                counter++;
            } 
            isDigit = 0;
            number = 0;
            
        }
         
        
      
    }
     fclose(fin);
     
   //  int max = res[0];
     int tmp = 0;
     
     for (i=0; i<counter;i++)
     {
         for (j=i;j<counter; j++)
         {
             if(res[i]>res[j])
             {
                 tmp = res[i];
                 res[i] = res[j];
                 res[j] = tmp;
            }
        }
        
    }
             
    
    
    
    
    
    FILE *fout = fopen(FOUT, "w");
    
    for (i=0; i<counter;i++)
     {
    fprintf(fout, "%d ", res[i]);
}

    fclose(fout);
    
    return 0;
}
