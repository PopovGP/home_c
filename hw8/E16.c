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

int Calc(ARRAY_TYPE arr[])
{
    
  
        
     int result = 0; 
     int counter = 0;
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
       if (tempCounter>counter) 
	   {
			counter = tempCounter;
			result = x;
	   }
		
         
}
	return result;

    
  
    
   
}
    

int main(int argc, char *argv[])
{
    ARRAY_TYPE arr[SIZE];
    ReadArray(arr);
    printf("%d" , Calc(arr));
    
    
    return 0;
}

