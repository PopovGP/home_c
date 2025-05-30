#include <stdio.h>

int main(int argc, char **argv)
{
    int N;
    scanf("%d", &N);
    
    int count = 0;
    
    for (int i=2; i<10; i++)
    {
        count = 0;
        
        for (int j=2; j<=N; j++)
        {
            if (j%i==0)
            {
                count ++;
            }
        }
        printf("%d %d\n", i, count);
    }
    return 0;
}
