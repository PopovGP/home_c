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
    
   //  for (int j=0; j<2; j++)
  //  {
        
        
        
    for (int i=0; i<SIZE; i++)
    {
         int counter = i;
         int x = arr[i];
        
       for(int k=i+1; k<SIZE; k++)
       {
           PrintArray(arr);
           
           int y = arr[k];
           printf("i=%d k=%d x=%d y=%d\n", i, k, x, y);
           if (x>y) 
           {
               
               arr[k] = x;
               arr[counter] = y;
               counter = k;
            }
            PrintArray(arr);
            printf("\n");
               
           
           
       }
         
        
    }
 //   }
    
  
    
   
}
    

int main(int argc, char *argv[])
{
    ARRAY_TYPE arr[SIZE];
    ReadArray(arr);
    Calc(arr);
    PrintArray(arr);
    
    return 0;
}

