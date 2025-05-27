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



void Calc(ARRAY_TYPE arr[])
{
    ARRAY_TYPE sum = 0;
   
    
   

    for (int i=0; i<SIZE; i++)
    {
   
        sum += arr[i] > 0?arr[i]:0;
        
       
    }
    printf("%d",  sum);
}
    

int main(int argc, char *argv[])
{
    ARRAY_TYPE arr[SIZE];
    ReadArray(arr);
    Calc(arr);

    return 0;
}
