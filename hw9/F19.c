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

int meanSled(ARRAY_TYPE arr[SIZE][SIZE])
{
    int sled = 0;
    
    for (int i=0; i<SIZE; i++)
    {

            sled+=arr[i][i] ;

   
    }
    
    return sled/SIZE;
}


int main(int argc, char **argv)
{
  
    
    int arr[SIZE][SIZE]={0};
    int msled = 0;
    int res = 0;
    
    Read2DArray(arr);
    
    msled = meanSled(arr);
    
    for (int i=0; i<SIZE; i++)
    {
        for (int j=0; j<SIZE; j++)
        {
            if (arr[i][j]>msled) res+=1;
        }
    }
   
    printf("%d", res);
    
    
    return 0;
}
