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


void func(int size, int a[])
{
 
    int myI = 0, myJ = 1;
    int sum = a[0] + a[1];
    
    for (int i = 0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if (a[i]+a[j]<sum)
            {
                sum = a[i] + a[j];
                myI = i;
                myJ = j;

            }
        }
    }
    printf ("%d %d", myI, myJ);
    
}

int main(int argc, char **argv)
{
    ARRAY_TYPE arr[SIZE];
    ReadArray(arr);
    func(SIZE, arr);
  //  PrintArray(arr);
    
    return 0;
}
