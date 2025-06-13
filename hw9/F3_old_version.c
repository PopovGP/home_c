#include <stdio.h>

#define SIZE 10
#define ARRAY_TYPE int


void PrintArray(ARRAY_TYPE arr[])
{
    for (int i=0; i<SIZE; i++)
    {
        if (arr[i])
            printf("%d %d\n", i, arr[i]);
    }
}

void func(long long int n, int size, ARRAY_TYPE arr[])
{
 
    int digit;
    do
    {
       // printf("%d %d\n", n%10, n/10);
       digit = n%10;
       

        arr[digit] += 1;
        
        n = n / 10;
        
        
   
        
      //  printf("!!%d %d\n", n%10, n/10);
        
    }while(!((n/10==0)&&(n%10==0)));
}


int main(int argc, char **argv)
{
    long long int n;
    ARRAY_TYPE arr[SIZE]={0};
    scanf("%lld", &n);
    func(n, SIZE, arr);
    PrintArray(arr);
    
    return 0;
}
