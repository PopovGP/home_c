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
    
    int temp = arr[1];
    int index = 0;
    
    
    for (int i=0; i<SIZE; i++)
    {
        
        
        index = index == SIZE -1 ? 0: index+1;
        printf("i= %d index=%d\n", i, index);
        
        temp = arr[index];
        
        arr[index] = arr[i];
        //arr[SIZE/2+j+j-i-1] = temp;
        
         
        
    }
    
     for (int i=0; i<SIZE; i++)
    {
        printf("%d ", arr[i]);
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

