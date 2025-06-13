#include <stdio.h>

#define SIZE 5
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



int main(int argc, char **argv)
{
  
    
    int arr[SIZE][SIZE]={0};
    int sled = 0;
    
    Read2DArray(arr);
    
   
    
    for (int i=0; i<SIZE; i++)
    {

            sled+=arr[i][i] ;

   
    }
   
    printf("%d", sled);
    
    
    return 0;
}
