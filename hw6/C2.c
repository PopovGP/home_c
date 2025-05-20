#include <stdio.h>

int modulus(int num)
{
    if (num<0) return num*-1;
    return num;
}



int pow(int n, int p)
{
    if (p==0) return 1;
    int res = n;
    for(int i=2; i<=p; i++)
    {
        res = res * n;
    }
    return res;
}

int main(int argc, char**argv)
{
    int n,p;
    scanf("%d %d", &n, &p);
    
    if (modulus(n)>1000) return 0;
    if (p<0) return 0;
    
    printf("%d\n", pow(n, p));
    return 0;
}
