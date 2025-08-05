#include <stdint.h>
#include <stdio.h>

struct bit_arr
{
    uint8_t x: 9;
    uint8_t y: 3;
};

int main(void)
{
    struct bit_arr arr;
    arr.x = 3;
    arr.y = 4;
    
    printf("x=%d y=%d\n", arr.x, arr.y);
    return 0;
}
    
