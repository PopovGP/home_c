#include <stdio.h>



int middle(int a, int b)
{
   
    return (a+b)/2;
}

int main(int argc, char**argv)
{
    int n,p;
    scanf("%d %d", &n, &p);
    

    if (p<0 || n<0) return 0;
    
    printf("%d\n", middle(n, p));
    return 0;
}
