#include <stdio.h>

#define ARRAY_TYPE int



void PrintArray(ARRAY_TYPE arr[], int counter)
{
    for (int i=0; i<counter; i++)
    {
        printf("%d", arr[i]);
    }
}

void BubbleSort(ARRAY_TYPE arr[], int counter)
{
    int temp;
    for (int i=0; i<counter; i++)
    {
        for (int j=i; j<counter; j++)
        {
            //printf("i=%d j=%d arr[i]=%d arr[j]=%d\n", i, j, arr[i], arr[j]);
           // PrintArray(arr, counter);
           // printf("\n");
            if (arr[i]<arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
                }   
        }
    }
}
                
            
    
int main(int argc, char **argv)
{
    long long int N;
  
    int counter = 0;
    scanf("%lld", &N);
    
    
    
    long long int digits = 10;
    
    while(1)
    {
       // printf("%lld \n", N/digits);
        if (N/digits==0)
        {
            digits = digits / 10;
            break;
        }
            
        counter ++;
        digits = digits * 10;
        if (digits>100000000000) break;
        
    }
      
    counter = 0;
    int arr[100];
    while(1)
    {
      //  printf("%llu %llu\n", N/digits, N%digits);
      //  printf("%llu ", N/digits);
        arr[counter] = N/digits;
        N = N%digits;
        digits = digits/10;
        counter ++;
        if (digits == 0) break;
    }
    
    BubbleSort(arr, counter);
    PrintArray(arr, counter);
    
    return 0;
}
