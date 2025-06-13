#include <stdio.h>


void print_digit(char s[])
{
   
    int arr[10]={0};
    
    
    int i = 0;
 
    
    while (s[i])
    {
        if ((s[i]>='0')&&(s[i]<='9'))
        {
     
            arr[s[i]-48] += 1;
         
            
        }
        
        i++;
            
  
    }
    
    
  
    i = 0;

   for (i=0; i<10; i++)
    {
        if (arr[i]!=0)
        printf("%d %d\n", i, arr[i]);
        
        
      
    }
    

}
int main(int argc, char **argv)
{
    char s[100] = "77777q11w333fsf";
    print_digit(s);
    
    return 0;
}
    
