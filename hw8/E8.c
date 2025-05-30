#include <stdio.h>

#define SIZE 12
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
 
    
 
       int temp ;
 
    int index = 0; 
    int offset = 0;
    
 
    for (int i=0; i<SIZE/3/2; i++)
    {
        
        
        index = SIZE/3 - 1 - i;
        
       // printf("i= %d index=%d %d %d\n" , i, index, temp1, temp2);
        
        //PrintArray(arr);
       // printf("\n");
        
        temp = arr[i];

        arr[i] = arr[index];
        
        arr[index] = temp;
        
        temp = arr[i+SIZE/3];

        arr[i+SIZE/3] = arr[index+SIZE/3];
        
        arr[index+SIZE/3] = temp;
        
        
        temp = arr[i+SIZE/3*2];

        arr[i+SIZE/3*2] = arr[index+SIZE/3*2];
        
        arr[index+SIZE/3*2] = temp;
        
        
        
        
       // PrintArray(arr);
       // printf("i= %d index=%d %d %d\n\n" , i, index, temp1, temp2);
    
        
         
        
    }

    
  
    
   
}
    

int main(int argc, char *argv[])
{
    ARRAY_TYPE arr[SIZE];
  
    ReadArray(arr);
    Calc(arr);
    PrintArray(arr);
    
    return 0;
}

