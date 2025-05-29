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

void PrintArray(ARRAY_TYPE arr[], int counter)
{
    for (int i=0; i<counter; i++)
    {
        printf("%d ", arr[i]);
    }
}

void Calc(ARRAY_TYPE arr[], ARRAY_TYPE newArr[], int *counter)
{
    ARRAY_TYPE x;

    
    for (int i=0; i<SIZE; i++)
    {
        x = arr[i];
       // if (x<100) continue;
        if ((x/10)%10==0)
        {
            newArr[*counter] = x;
            (*counter) ++;
        }
        
        
      
        
            
    }
  
}
    

int main(int argc, char *argv[])
{
    ARRAY_TYPE arr[SIZE];
    ARRAY_TYPE newArr[SIZE];
   
    ARRAY_TYPE newCounter = 0;
    
    ReadArray(arr);
    //PrintArray(arr);
    Calc(arr, newArr, &newCounter);
    
    
    PrintArray(newArr, newCounter);


    return 0;
}
