#include <stdio.h>

int pr(int start, int N)
{


    if (start==N) return N;
    return start + pr(start + 1, N);
    

}
    

int main(int argc, char **argv)
{
    int N;
    scanf("%d", &N);
    
    if (N<=0) return 0;
    
    printf("%d\n",pr(1, N));
}
