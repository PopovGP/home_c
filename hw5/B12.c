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
    

        int num = a%10;
        int max=num;
        int min=num;
        
        a = a/10;

        
        while (a)
        {
     
            num = a%10;
            min = num<min?num:min;
            max = num>max? num:max;
        
       
          


            
            a = a/10;
           
            
     
        }
        
    

    
    printf("%d %d\n",  min, max);
    return 0;

}
