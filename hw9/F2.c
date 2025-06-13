#include <stdio.h>

#define SIZE 5
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


void sort_even_odd(int n, int a[])
{
    int elem;
    unsigned int haveSpace;
    int even;
    for (int i = 0; i<n; i++)
    {
        //printf("remainder %%2 %d ", a[i]%2);
        //PrintArray(a);
       // printf("\n");
        
        haveSpace = 0;
 
        
        if ((a[i]%2 != 0)||(a[i]==1)){ //нечетное число
        //теперь проверим, есть ли далее четные числа,
        //чтобы понимать, сможем ли сдвинуть массив
            for(int j=i+1; j<n; j++)
            {
                if (a[j]%2 == 0) {even =a[j]; elem = a[i]; haveSpace=j; break;}
            }
            if (haveSpace)
            {
                
                //передвигаем элементы вправо
                for(int  j=haveSpace; j>i; j--)
                {
                    
                    a[j] = a[j-1];

   
                } 
                a[i] = even;
            }
         }
    
        
      
       
    }
  
}

int main(int argc, char **argv)
{
    ARRAY_TYPE arr[SIZE];
    ReadArray(arr);
    sort_even_odd(SIZE, arr);
    PrintArray(arr);
    
    return 0;
}
