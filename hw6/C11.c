#include <stdio.h>


 int nod(int a, int b)
{
    while(1)
    {
    if (a>b) 
    
        a = a - b;
     else
        b = b - a;
        

    
    if (a==b) return a;
}
    
   
}

int main(int argc, char**argv)
{
    int a,b;
    scanf("%d%d", &a, &b);
    
    if (a<=0 || b<=0) return 0;
   
    

    
    printf("%d\n", nod( a,  b));
    return 0;
}
