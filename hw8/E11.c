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

void BubbleSort(ARRAY_TYPE arr[])
{
    int temp;
    for (int i=0; i<SIZE; i++)
    {
        for (int j=i; j<SIZE; j++)
        {
            //printf("i=%d j=%d arr[i]=%d arr[j]=%d\n", i, j, arr[i], arr[j]);
           // PrintArray(arr, counter);
           // printf("\n");
            if (arr[i]%10>arr[j]%10)
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
                }   
        }
    }
}
                
             

int main(int argc, char *argv[])
{
  
    ARRAY_TYPE arr[SIZE];
    ReadArray(arr);
    BubbleSort(arr);
    PrintArray(arr);
    
    return 0;
}

