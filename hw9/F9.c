#include <stdio.h>

#define SIZE 5
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

void swap_negmax_last(int size, int a[])
{
    int max = 0;
    int isFound = 0;
    int temp;
    for (int i=0; i<size; i++)
    {
        if (a[i]<0)
        {
            if (max == 0)
            { 
                max = a[i];
                isFound = i+1;
            }
            else
            {
                if (a[i]>max)
                {
                     max = a[i];
                     isFound = i+1;
                 }
                    
            }
        }
    }
    
    if (isFound)
    {
        temp = a[size-1];
        a[size-1] = a[isFound -1];
        a[isFound - 1] = temp;
    }
        
}



int main(int argc, char **argv)
{
    ARRAY_TYPE arr[SIZE];
    ReadArray(arr);
    swap_negmax_last(SIZE, arr);
    
    PrintArray(arr);
    
    return 0;
}
