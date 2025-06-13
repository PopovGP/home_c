#include <stdio.h>

#define SIZE 10
#define ARRAY_TYPE int

void Read2DArray(ARRAY_TYPE arr[SIZE][SIZE])
{
    for (int i=0; i<SIZE; i++)
    {
        for (int j=0; j<SIZE; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}

int maxInRow(ARRAY_TYPE arr[SIZE])
{
    int max = arr[0];
    
    for (int i = 0; i<SIZE; i++)
    {
        max = arr[i] > max? arr[i]: max;
    }
    return max;
}



int main(int argc, char **argv)
{
  
    
    int arr[SIZE][SIZE]={0};
    int res = 0;
    
    Read2DArray(arr);
    
   
    
    for (int i=0; i<SIZE; i++)
    {

           res+=maxInRow(arr[i]);

   
    }
   
    printf("%d", res);
    
    
    return 0;
}
