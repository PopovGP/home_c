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


int sum_between_ab(int from, int to, int size, int a[])
{
 
  //  printf("from %d, to: %d, size: %d\n", from, to, size);
    int count=0;
   
    if (from>to) 
    {
        int tmp;
        tmp = from;
        from = to;
        to = tmp;
    }
    
    for (int i = 0; i<size; i++)
    {
        if ((a[i]>=from)&&(a[i]<=to)) count+=a[i];

 
    }

   return count;  
}

int main(int argc, char **argv)
{
    ARRAY_TYPE arr[SIZE] = {89, 71, 6 ,40, 61, 75 ,53, 64, 79, 97};
    //ReadArray(arr);
    printf("%d",sum_between_ab(60,50,10,arr));
  //  PrintArray(arr);
    
    return 0;
}
