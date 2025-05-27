#include <stdio.h>

#define SIZE 12
#define ARRAY_TYPE int

void ReadArray(ARRAY_TYPE arr[])
{
    for (int i=0; i<SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
}



float Calc(ARRAY_TYPE arr[])
{
    int sum = 0;
    for (int i=0; i<SIZE; i++)
    {
        sum+= arr[i];
    }
    return sum/(float)SIZE;
}
    

int main(int argc, char *argv[])
{
    ARRAY_TYPE arr[SIZE];
    ReadArray(arr);
    
    printf("%.2f", Calc(arr));
    return 0;
}
