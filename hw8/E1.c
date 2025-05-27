#include <stdio.h>

#define SIZE 5
#define ARRAY_TYPE float

void ReadArray(ARRAY_TYPE arr[])
{
    for (int i=0; i<SIZE; i++)
    {
        scanf("%f", &arr[i]);
    }
}

void PrintArray(ARRAY_TYPE arr[])
{
    for (int i=0; i<SIZE; i++)
    {
        printf("%.3f", arr[i]);
    }
}

float Calc(ARRAY_TYPE arr[])
{
    int sum = 0;
    for (int i=0; i<SIZE; i++)
    {
        sum+= arr[i];
    }
    return sum/(ARRAY_TYPE)SIZE;
}
    

int main(int argc, char *argv[])
{
    ARRAY_TYPE arr[SIZE];
    ReadArray(arr);
    //PrintArray(arr);
    printf("%.3f", Calc(arr));
    return 0;
}
