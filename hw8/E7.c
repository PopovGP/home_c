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
    
    int temp;
    for (int j=0; j<SIZE; j=j+SIZE/2)
    {
       
    printf("j = %d\n", j);
    
    for (int i=0+j; i<(SIZE/2)+j; i++)
    {
        printf("i= %d index=%d\n", i, SIZE/2+j+j-i-1);
        temp = arr[i];
        arr[i] = arr[SIZE/2+j+j-i-1];
        arr[SIZE/2+j+j-i-1] = temp;
        
         
        
    }
    
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
