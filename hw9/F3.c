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

void func(char n, int size, ARRAY_TYPE arr[])
{
 
    int digit;

        
    digit = n-48;

    arr[digit] += 1;
        
  
}


int main(int argc, char **argv)
{
   
    ARRAY_TYPE arr[SIZE]={0};
    char c='0';

    while(1)
    {
        scanf("%c", &c);

        if (c=='\n') break;
        func(c, SIZE, arr);
    }
    
   
    PrintArray(arr);
    
    return 0;
}
