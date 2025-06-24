#include <stdio.h>
#include <string.h>

int main(int argc, char ** argv)
{
    FILE *f;
    FILE *fw;
    
    f = fopen("input.txt", "rb");
    fw = fopen("output.txt", "wb");
    if (f) {
    
    char s[100];
    
    int len = 0;
   // int res = 0;
 
      
 
    while(fscanf(f, "%s", (char *)&s)==1)
    {
      
       len = strlen(s);
      
       for (int i=0; i<3; i++)
       {
            fprintf(fw, "%s", s);
            i==(3-1)? fprintf(fw, " "): fprintf(fw, ", ");
        }
        fprintf(fw, "%d\n", len);
        
    }
    


}

    
   
    fclose(f);

    
    fclose(fw);
    
    return 0;
}
