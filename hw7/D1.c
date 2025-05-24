#include <stdio.h>

void pr(int start, int N)
{
    printf("%d ", start);
    if (start==N) return;
    pr(start + 1, N);
}
    

int main(int argc, char **argv)
{
    int N;
    scanf("%d", &N);
    
    if (N<=0) return 0;
    
    pr(1, N);
}
