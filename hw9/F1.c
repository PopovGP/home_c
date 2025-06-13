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


void sort_array(int size, int a[])
{
    int elem ;
    for (int i = 0; i<size; i++)
    {
        for(int j=i; j<size; j++)
        {
            if (a[i]>a[j])
            {
                elem = a[j];
                a[j] = a[i];
                a[i] = elem;
            }
        }
    }
}

int main(int argc, char **argv)
{
    ARRAY_TYPE arr[SIZE];
    ReadArray(arr);
    sort_array(SIZE, arr);
    PrintArray(arr);
    
    return 0;
}
