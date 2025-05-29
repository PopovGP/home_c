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

void Calc(ARRAY_TYPE arr[], ARRAY_TYPE positive[], ARRAY_TYPE negative[], int *positives, int *negatives)
{
    ARRAY_TYPE x;
    
    for (int i=0; i<SIZE; i++)
    {
        x = arr[i];
        if (x>0)
        {
            positive[*positives] = x;
            (*positives) ++;
        }
        else if (x<0)
        {
            negative[*negatives] = x;
            (*negatives) ++;
        }
            
    }
  
}
    

int main(int argc, char *argv[])
{
    ARRAY_TYPE arr[SIZE];
    ARRAY_TYPE positive[SIZE];
    ARRAY_TYPE negative[SIZE];
    ARRAY_TYPE positives = 0;
    ARRAY_TYPE negatives = 0;
    ReadArray(arr);
    //PrintArray(arr);
    Calc(arr, positive, negative, &positives, &negatives);
    
    
    PrintArray(positive, positives);
    PrintArray(negative, negatives);

    return 0;
}
