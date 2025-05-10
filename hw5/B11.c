#include <stdio.h>

int main(int argc, char**argv)
{
    int a; 
    scanf("%d", &a);
    if (a<0)
    {
        printf("Число должно быть неотрицательным!");
        return 1;
    }
    
        int rez=0;


        while (a)
        {
     

        
            rez = rez * 10 +   a%10;
          


            
            a = a/10;
           
            
     
        }
        
    

    
    printf("%d\n",  rez);
    return 0;

}
