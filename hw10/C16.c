#include <stdio.h>

#define FIN "input.txt"
#define FOUT "output.txt"

#define SIZE 1000
#define searchStrMacros "Ling"
#define replaceStrMacros "Cao"

void clearString(char *arr)
{
    char *ptr = arr;
    while(*ptr)
    {
        *ptr = '\0';
        ptr++;
    }
}
    
int cpyString(char *destStr, char *srcStr, int insertPlace)
{ 
    char *ptr = srcStr;
    int i = 0;

    
    while(*ptr)
    {
        *(destStr+insertPlace+i)=*ptr;
        i++;
        ptr++;
    }
    return i;
}
                
int main(int argc, char **argv)
{
    FILE *fin = fopen(FIN, "r");

  
  
    char res[SIZE+334]={0}; //чтобы новая строка влезла если исходная состоит только из 'Cao'

    char searchStr[]=searchStrMacros;
    char replaceStr[]=replaceStrMacros;
    char buf[sizeof(searchStr)]={0};
    
    
    
    //fscanf(fin, "%s", input);
    //printf("%s\n", input);
 
    
     
     int realSize = 0;
   
   
     char c;
    
    char letter = searchStr[0];
     int positionOnBuf = 0;
     
    while((c=fgetc(fin))!=EOF)
    {
        

   
        if (c==letter)
        {
     
            buf[positionOnBuf]=c;
           
            
         
            if (positionOnBuf==(sizeof(searchStr)-2))
            {
                //Совпала и последняя буква искомого слова
                
               
                //запишем новую строку в результат
                realSize += cpyString(res, replaceStr, realSize); 
                
               
                //Очистим буфер
                clearString(buf);
               
                positionOnBuf = 0;
                 
                
            }
           
            else
            {
            
            letter = searchStr[++positionOnBuf];
            }
            
                
        }
       
        else
        {
          
            
            letter = searchStr[0];
            
            if (positionOnBuf != 0)
            {
                //сбрасываем буфер
                realSize += cpyString(res, buf, realSize);
                clearString(buf);
              
                positionOnBuf = 0;
            }
            
            if (c==searchStr[0]) 
            {
            //Искомая строка началась заново.
            clearString(buf);
            buf[0]=c;
            
            positionOnBuf = 1;
            letter = searchStr[1];
            
             
            
                
            }
            else
            {
            res[realSize]=c;
            realSize++;
        }
            
           
                
            
           
        }

 
    }
    
     fclose(fin);
     
  
    
    
    
    
    FILE *fout = fopen(FOUT, "w");
    fprintf(fout, "%s", res);
    
    

    fclose(fout);
    
    return 0;
}
