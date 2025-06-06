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

void PrintArray(ARRAY_TYPE arr[])
{
    for (int i=0; i<SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
}

void BubbleSort(ARRAY_TYPE arr[])
{
    int temp;
    int direction = 0;
    int start=0;
    int end=SIZE/2;
    int condition;
    
    for (int k=0; k<=1; k++)
    {
      
    for (int i=start; i<end; i++)
    {
        for (int j=i+1; j<end; j++)
        {
           // printf("i=%d j=%d arr[i]=%d arr[j]=%d\n", i, j, arr[i], arr[j]);
          // PrintArray(arr);
          //  printf("\n");
           condition = direction==1?arr[i]<arr[j]:arr[i]>arr[j];
            if (condition)
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }  
           
        } 
        //printf("\n");
    }
    
    direction = 1;
    start = end;
    end = end * 2;
   // printf("dir=%d start=%d, end=%d", direction, start, end);

}
}
                
             

int main(int argc, char *argv[])
{
  
    ARRAY_TYPE arr[SIZE];
    ReadArray(arr);
    BubbleSort(arr);
    PrintArray(arr);
    
    return 0;
}

