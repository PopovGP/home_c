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
    
    int temp1 = arr[0];
    int temp2=0;
    int index = 3 ;
    
    
    for (int i=0; i<SIZE; i++)
    {
        
        
        index = index == SIZE - 1  ? 0: index + 1;
        printf("i= %d index=%d %d %d\n" , i, index, temp1, temp2);
        
        PrintArray(arr);
        printf("\n");
        
        temp2 = arr[index];
        
       
        
        arr[index] = temp1;
        
        temp1 = temp2;
        PrintArray(arr);
        printf("i= %d index=%d %d %d\n\n" , i, index, temp1, temp2);
    
        
         
        
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

