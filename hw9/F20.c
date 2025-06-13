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

int digitsMultiply(int n, int isOdd)
{
    int resEven=1, resOdd=1;

   
   
    
    
    do
    {
        
       
      //  printf("n%%10=%d ", n%10);
        if ((n%10)%2==0)
        {
            resEven = resEven * (n%10);
        }
        else 
        {
            resOdd = resOdd * (n%10);
        }
        
        
        
        n = n / 10;
        
  

        
    }while(!((n/10==0)&&(n%10==0)));
    
    // if (isOdd) printf("%d resOdd=%d resEven=%d\n", isOdd, resOdd, resEven);
    
    return isOdd?resOdd:resEven;
}





void func(int size, int a[])
{
 

    int countEven = 0;
    int countOdd  = 0;
   
    
    
    for (int i = 0; i<size; i++)
    {

       if(a[i]%2==0) countEven++;
       else countOdd++;

 
    }
    
    
    
    
    
    for (int i = 0; i<size; i++)
    {
        if (countOdd>=countEven) //если количество нечетных больше или равно количеству нечетных чисел
        {
            if(a[i]%2==0) //четное число
            {
                a[i] = digitsMultiply(a[i], 0);
 
            }
            
        }
        else
        {
            if(a[i]%2!=0) //нечетное число
            {
                a[i] = digitsMultiply(a[i], 1);
 
            }
        }

    }
    


}

int main(int argc, char **argv)
{
    ARRAY_TYPE arr[SIZE]; //= {89, 71, 6 ,40, 61, 75 ,53, 64, 79, 97};
    ReadArray(arr);
    func(SIZE, arr);
    PrintArray(arr);
    
    return 0;
}
