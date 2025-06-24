#include <stdio.h>

int main(int argc, char **argv)
{
    enum states {READY, STEADY, GO, STOP, RESET};
    

  
    printf("%d %d %d\n", READY, STEADY, GO);
    
    
    enum names {grisha=7, misha, sashs, masha, anya};
    
    printf("%d %d %d %d %d\n", grisha, misha, sashs, masha, anya);
    
    return 0;

}
