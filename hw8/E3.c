#include <stdio.h>

#define SIZE 10
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

void Calc(ARRAY_TYPE arr[])
{
    ARRAY_TYPE max = arr[0];
    int nummax = 0;
    ARRAY_TYPE min = arr[0];
    int nummin = 0;
    
    for (int i=1; i<SIZE; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
            nummin = i;
            
        }
         
        if (max < arr[i])
        {
            max = arr[i];
            nummax = i;
        }
    }
    printf("%d %d %d %d", nummax+1, max, nummin+1, min);
}
    

int main(int argc, char *argv[])
{
    ARRAY_TYPE arr[SIZE];
    ReadArray(arr);
    Calc(arr);
    
    //PrintArray(arr);
   // printf("%d", Calc(arr));
    return 0;
}
