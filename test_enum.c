#include <stdio.h>

int main()
{
    enum states {READY, NOT_READY} state = READY;
    printf("sizeof %lu", sizeof(state));
    return 0;
}
