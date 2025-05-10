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
    
    
    if (a==1){
        printf("%s\n", "NO" );
        return 0;
    }
    
    for(int i = 2; i<a; i++)
    {
      
     if ((a%i==0)&&(i!=a))
     {
        printf("%s\n", "NO" );
        return 0;
    }
     }  
        
    

    
    printf("%s\n", "YES" );
    return 0;

}


