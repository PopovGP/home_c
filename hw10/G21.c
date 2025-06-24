#include <stdio.h>

#define FIN "input.txt"
#define FOUT "output.txt"



       
int main(int argc, char **argv)
{
    FILE *fin = fopen(FIN, "r");
    FILE *fout = fopen(FOUT, "w");
    

    char c;
     
     int count=0;
    while((c=fgetc(fin))!=EOF)
    {
    
        if(c=='*') count++;

    }
    
    fclose(fin);
    
   // printf("count=%d\n", count);
    
     int step = 0;
     int prevstep = 0;
     while(1)
     {
        
        if (step>=count) break;
        
        prevstep = prevstep + 1;
        step = step + prevstep;  
        //printf("step = %d, prevst = %d\n", step, prevstep);
        
        
     }
     
     // printf("and now: step = %d, prevst = %d\n", step, prevstep);
     if(step!=count || count==0)
     {
    
         fprintf(fout, "NO");
         return 0;
     }
    



    step = 0;

    int prevstep1 = 0;
    
    while(1)
    {
       
        prevstep1 = prevstep1 + 1;
        step = step + prevstep1; 
       
        
        for(int j=0; j<prevstep-1; j++)
        {
            fprintf(fout, " "); 
            
        }
        
        for(int j=0; j<prevstep1; j++)
        {
            fprintf(fout, "* "); 
            
        }
        prevstep = prevstep - 1;
        
        fprintf(fout, "\n");
        
        if (prevstep == 0) break;
        
        
    }

    
    
    
 

    fclose(fout);
    
    return 0;
}
