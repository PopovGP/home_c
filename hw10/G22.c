#include <stdio.h>

#define FIN "input.txt"
#define FOUT "output.txt"


#define SIZE 20


       
int main(int argc, char **argv)
{
    FILE *fin = fopen(FIN, "r");
    FILE *fout = fopen(FOUT, "w");
    

   
    char myWord[SIZE] = {0};
    char res[SIZE] = {0};

     
     char *c = myWord;
     
     int count=1;
     int digit;
     
     fscanf(fin,"%s", myWord);
    fclose(fin);
    
     res[0] = myWord[0];
    
  //  printf("word=%s\n", word);
    c++;
    while(*c)
    {
        if (count>3) break;
        switch (*c){
        case 'a' : digit=0; break;
        case 'b' : digit=1; break;
        case 'c' : digit=2; break;
        case 'd' : digit=3; break;
        case 'e' : digit=0; break;
        case 'f' : digit=1; break;
        case 'g' : digit=2; break;
        case 'h' : digit=0; break;
        case 'i' : digit=0; break;
        case 'j' : digit=2; break;
        case 'k' : digit=2; break;
        case 'l' : digit=4; break;
        case 'm' : digit=5; break;
        case 'n' : digit=5; break;
        case 'o' : digit=0; break;
        case 'p' : digit=1; break;
        case 'q' : digit=2; break;
        case 'r' : digit=6; break;
        case 's' : digit=2; break;
        case 't' : digit=3; break;
        case 'u' : digit=0; break;
        case 'v' : digit=1; break;
        case 'w' : digit=0; break;
        case 'x' : digit=2; break;
        case 'y' : digit=0; break;
        case 'z' : digit=2; break;
        }
        
        c++;
        
        if(digit)
        {
            if (count>0)
            {
                if(res[count-1] == digit+'0') 
                {
                    continue;
                    
                }
            }
            res[count] = digit+'0';
            count++;
        }

    }
    
    res[1] = res[1]?res[1]:'0';
    res[2] = res[2]?res[2]:'0';
    res[3] = res[3]?res[3]:'0';
    
  //  fprintf(fout,"%c", firstLetter);
    fprintf(fout,"%s", res);
    

    fclose(fout);
    
    return 0;
}
