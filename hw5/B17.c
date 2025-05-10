#include <stdio.h>

int main(int argc, char**argv)
{
    int a; 
    scanf("%d", &a);
    if (a<=10)
    {
        printf("Число должно превосходить 10!");
        return 1;
    }
    
    int sum;
    int mul;
    int b;
      for (int i = 10; i<=a; i++)
      {
              sum = 0;
 mul = 0;
            b = i;

  while (b)
    {
       
        sum = sum + b%10;
        mul = b==i? b%10 : mul*(b%10);
        b = b/10;
    
        
 
    }
   
    
   if(sum == mul) printf("%d ", i);
           
            
     
        }
        
    

    
    printf("\n");
    return 0;

}
