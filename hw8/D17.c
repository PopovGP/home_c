#include <stdio.h>

#define SIZE 10
#define ARRAY_TYPE int

void ReadArray(ARRAY_TYPE arr[])
{
    for (int i=0; i<SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void PrintArray(ARRAY_TYPE arr[])
{
    for (int i=0; i<SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
}

void Calc(ARRAY_TYPE arr[])
{
    
  
        
 
     int tempCounter = 0;
     int x,y;  
        
    for (int i=0; i<SIZE; i++)
    {
         
         x = arr[i];
         
         tempCounter = 0;
        
       for(int k=0; k<SIZE; k++)
       {
			y = arr[k];
			if (x == y) {tempCounter ++; }
			
           
           
       }
       if (tempCounter==1) 
	   {
			
			printf("%d ", x);
	   }
		
         
}
	

    
  
    
   
}
    

int main(int argc, char *argv[])
{
    ARRAY_TYPE arr[SIZE];
    ReadArray(arr);
    Calc(arr);
    
    
    return 0;
}

