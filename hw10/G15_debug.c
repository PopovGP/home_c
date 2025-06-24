#include <stdio.h>

#define FIN "input.txt"
#define FOUT "output.txt"

#define SIZE 1000
#define searchStrMacros "Cao"
#define replaceStrMacros "Ling"

//void addToBuffer(int *cnt, char *ltr, char *res, char *bf, char *srStr, char *replStr)
//{
            //bf[cnt]=c;
            
           
            
            
            //if (cnt==(sizeof(srStr)-2))
            //{
                ////Совпала и последняя буква искомого слова
                
             
                ////запишем новую строку в результат
                //char *ptr = replStr;
                //while(*ptr)
                //{
                    
                   
                    //res[realSize]=*ptr;
                    //realSize++;
                    
                    //ptr++;
                //}
                //printf("\t res after %s \n",  res);
                
                //printf("\t buf before %s \n",  buf);
                ////Очистим буфер
                //ptr = buf;
                //while(*ptr)
                //{
                    //*ptr = '\0';
                    //ptr++;
                //}
                 //printf("\t buf after %s \n",  buf);
                //positionOnBuf = 0;
                 
                
            //}
            //else
            //{
            
            //letter = searchStr[++positionOnBuf];
        //}
//}
   
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
    printf("%s: 1. dest: %s, src: %s, insPlace: %d\n",__func__, destStr, srcStr, insertPlace);
    char *ptr = srcStr;
    int i = 0;

    
    while(*ptr)
    {
        printf("%s: 2. dest: %s, src: %s, insPlace: %d\n",__func__, destStr, srcStr, insertPlace);
        *(destStr+insertPlace+i)=*ptr;
        printf("%s: 3. dest: %s, src: %s, insPlace: %d, i=%d, *ptr=%c\n",__func__, destStr, srcStr, insertPlace, i, *ptr);
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
    char buf[4]={0};
    
    char *ptr = replaceStr;
    
    
    //fscanf(fin, "%s", input);
    //printf("%s\n", input);
 
    
     
     int realSize = 0;
   
   
     char c;
    
    char letter = searchStr[0];
     int positionOnBuf = 0;
     
    while((c=fgetc(fin))!=EOF)
    {
        

        printf("after while: c=%c letter=%c positionOnBuf=%d res=%s buf=%s\n", c, letter, positionOnBuf, res, buf);
        if (c==letter)
        {
     
            buf[positionOnBuf]=c;
            
            ptr = buf;
                while(*ptr)
                {
                    printf("test buf=%c positionOnBuf=%u\n", *ptr, positionOnBuf);
                    ptr++;
                }
            
            
           printf("\t s=%lu, positionOnBuf=%d letter=%c buf=%s  res=%s sizeof=%lu \n", sizeof(c), positionOnBuf, letter, buf, res, sizeof(searchStr));
            if (positionOnBuf==(sizeof(searchStr)-2))
            {
                //Совпала и последняя буква искомого слова
                
                printf("\t res before: %s repl str: %s \n",  res, replaceStr);
                //запишем новую строку в результат
                realSize += cpyString(res, replaceStr, realSize); 
                
                printf("\t res after: %s \n",  res);
                
                printf("\t buf before: %s \n",  buf);
                //Очистим буфер
                clearString(buf);
                 printf("\t buf after: %s \n",  buf);
                positionOnBuf = 0;
                 
                
            }
           
            else
            {
            
            letter = searchStr[++positionOnBuf];
            }
            
                
        }
        else if (c==searchStr[0]) 
        {
            //Искомая строка началась заново.
            buf[0]=c;
            
            positionOnBuf = 1;
            letter = searchStr[1];
            
             
            
                
        }
        else
        {
            printf("1.else c=%c letter=%c coounter=%d\n", c, letter, positionOnBuf);
            
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
            
             printf("2.else c=%c letter=%c coounter=%d\n", c, letter, positionOnBuf);
                
            
           
        }

 
    }
    
     fclose(fin);
     
  
    
    
    
    
    FILE *fout = fopen(FOUT, "w");
    fprintf(fout, "%s", res);
    
    

    fclose(fout);
    
    return 0;
}
