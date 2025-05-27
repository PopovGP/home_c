#include <stdio.h>

#define SIZE 5
#define ARRAY_TYPE int
#define INPUTTYPE d

void ReadArray(ARRAY_TYPE arr[])
{
    for (int i=0; i<SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
}

//void PrintArray(ARRAY_TYPE arr[])
//{
    //for (int i=0; i<SIZE; i++)
    //{
        //printf("%.3f", arr[i]);
    //}
//}

int Calc(ARRAY_TYPE arr[])
{
    int sum = arr[0];
    for (int i=1; i<SIZE; i++)
    {
        sum = sum > arr[i] ? arr[i] : sum;
    }
    return sum;
}
    

int main(int argc, char *argv[])
{
    ARRAY_TYPE arr[SIZE];
    ReadArray(arr);
    //PrintArray(arr);
    printf("%d", Calc(arr));
    return 0;
}
