#include <stdio.h>

unsigned long long  factorial(int x)
{
    unsigned long long res = 1;
    for (int i = 1; i<=x; i++)
    {
        res = res * i;
    }
   
    return res;
}

float mul(float x, int c)
{
    float res = x;
    for (int i=2; i<=c; i++)
    {
        res = res * x;
    }

    return res;
}
        
float abs1(float x)
{
    if (x<0) return x*-1;
    return x;
}
        

float sinus(float x)
{
    float delta = 0.001;
    float prev = 0;
    float res = x;
    int counter = 3;
    float sign = -1.00;
    
    while(abs1(res - prev) > delta)
    {
        prev = res;
         
        res = res + sign * (mul(x, counter)/(float)factorial(counter));
        
        
        sign = sign*-1;
        counter = counter + 2;
        

        

    }
    return res;
    
   
}

int main(int argc, char**argv)
{
    int a;
    scanf("%d", &a);
    
    float rad = (float)a*3.1415926535897/180;
  
    
    if (a<0 || a>90) return 0;
   
    

    
    printf("%.3f\n", sinus(rad));
    return 0;
}
