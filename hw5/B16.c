#include <stdio.h>

int main(int argc, char** argv)
{
    int a,b;
    scanf("%d%d", &a,&b);
    if (a<0||b<0)
    {
        printf("Введенные числа должны быть положительными!\n");
        return 1;
    }
    
    while(1)
    {
        if(a==b)
        {
            printf("%d",a);
            return 0;
        }
        
        if(a>b)
        {
            a = a-b;
        } 
        else
        {
            b = b-a;
        }
    }
}
    
    
