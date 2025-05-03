#include <stdio.h>

int main(int argc, char **argv)
{
    int x1,x2,y1,y2;
    float k,b;
    
    //у =  k*x + b
    
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    k = (y1-y2)/(float)(x1-x2); 
    b = y1 -(float)k*x1;

   
    
    printf("%.2f %.2f", k, b);
    
    
    
    return 0;
}
