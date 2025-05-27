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



void Calc(ARRAY_TYPE arr[])
{
    ARRAY_TYPE max1 = arr[0];
    ARRAY_TYPE max2 = arr[1];
    
   

    for (int i=1; i<SIZE; i++)
    {
   
        if (max1 < arr[i])
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (max2 <arr[i]) max2 = arr[i];
        
       
    }
    printf("%d",  max1 + max2);
}
    

int main(int argc, char *argv[])
{
    ARRAY_TYPE arr[SIZE];
    ReadArray(arr);
    Calc(arr);

    return 0;
}
