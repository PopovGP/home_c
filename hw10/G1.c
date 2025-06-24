#include <stdio.h>
#include <string.h>

int main(int argc, char ** argv)
{
    FILE *f;
    FILE *fw;
    
    f = fopen("input.txt", "rb");
    fw = fopen("output.txt", "wb");
    if (f) {
    
  //  char s[100];
    
    int len = 0;
    int res = 0;
    
   // len = strlen(s);
    for (int i=0; i<3; i++)
    {
      
      len = 0;
    while(1) //fscanf(f, "%s", (char *)&s)==1)
    {
       // res = 
       res = fgetc(f);
       if (res == EOF) break;
       if (res!='\n')
       {
       fputc(res, fw);
       len+=1;
    }
       
      //  len = strlen(s);
      //  for (int i=0; i<3; i++)
      //  {
      //      fprintf(fw, "%s", s);
      //      i==(3-1)? fprintf(fw, " "): fprintf(fw, ", ");
     //   }
     //   fprintf(fw, "%d\n", len);
        
    }
    fseek(f, 0, SEEK_SET);
    if (i==(3-1))
    {
        fputc(' ',fw);
    }
    else
    { 
        fputc(',', fw); fputc(' ', fw); 
    }
    

    
}
 fprintf(fw, "%d", len);
    
   
    fclose(f);
    
    }
    fclose(fw);
    
    return 0;
}
