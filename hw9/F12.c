#include <stdio.h>

#define SIZE 30
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


void change_max_min(int size, int a[])
{
 
    int maxI = 0, minI = 0;
    int temp;
    int max = a[0];
    int min = a[0];
    
    for (int i = 1; i<size; i++)
    {
        if (a[i]>max) { max = a[i]; maxI = i;};
        if (a[i]<min) { min = a[i]; minI = i;};
 
    }
    
    temp = a[maxI];
    a[maxI] = a[minI];
    a[minI] = temp;
    
    
    
}

int main(int argc, char **argv)
{
    ARRAY_TYPE arr[SIZE];
    ReadArray(arr);
    change_max_min(SIZE, arr);
  //  PrintArray(arr);
    
    return 0;
}
