#include <stdio.h>


int compression(int a[], int b[], int N)
{
   
    int index = 0;
    int digit = 0;
 
    int i;
    
    b[index] = 0;
   for ( i=0; i<N; i++)
   {
        if(a[i]==digit)
        {
             b[index] += 1;
        }
        else
        {
            digit = digit == 1? 0: 1;
            
            index ++;
            b[index]=0;
            b[index] += 1;
           
        }
 
    }

   return index+1;

}

int main(int argc, char **argv)
{

    
    return 0;
}
    
