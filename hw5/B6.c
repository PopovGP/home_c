#include <stdio.h>

int main(int argc, char**argv)
{
    int a;
    scanf("%d", &a);
    
        

    int previous = -1;

    while (a)
    {

       
        if (previous == a%10)
        {
            printf("YES\n");
            return 0;
        }
        previous = a%10;

        a = a/10;
        
 
    }

    printf("NO\n");
    return 0;

}
