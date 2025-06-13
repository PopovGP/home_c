#include <stdio.h>

int main(void)
{
    int a[5]={10,20,30,40,50};
    printf("%lu %lu %p\n", sizeof(a[0]), sizeof(a), &a);
    int *ptr = a;
    char *cptr = (char *)a;
    
    *ptr+=0xFFFFFFFFF0; 
   // *ptr++=22;
   
    
    for (int i=0; i<5; i++)
    {
        printf("a[%d]=%d ", i, a[i]);
        printf("&a[%d]=%p ", i, &a[i]);
        printf("int* = %p ",  ptr);
        printf("char* = %p ",  cptr);
        printf("char = %c \n",  *cptr);
        ptr = ptr + 1;
        cptr = cptr + 1;
        
    }
    
    
    printf("Sample #2\n");
    int b[5] = {10,20,30,40,50};
int *pb, n=10;
pb = b+2;
*pb++ = n+3;
printf("%d\n",*pb);
printf("%d %d %d %d %d\n", b[0],b[1],b[2],b[3],b[4]);

        
    return 0;
}
