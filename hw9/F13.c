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


int count_between(int from, int to, int size, int a[])
{
 
 
    int count=0;
  
    
    for (int i = 0; i<size; i++)
    {
        if (a[i]>=from&&a[i]<=to) count++;

 
    }
    
   return count;
    
    
    
}

int main(int argc, char **argv)
{
    ARRAY_TYPE arr[SIZE];
    ReadArray(arr);
    //int count_between(int from, int to, int size, int a[])
  //  PrintArray(arr);
    
    return 0;
}
