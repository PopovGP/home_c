#include <stdio.h>

int main(int argc, char **argv)
{
    unsigned int month;
    scanf("%d", &month);
    
    if ((month==12)||(month==1)||(month==2)) printf("%s", "winter");
    else if ((month>=3)&&(month<=5)) printf("%s", "spring");
    else if ((month>=6)&&(month<=8)) printf("%s", "summer");
    else  printf("%s", "autumn");
    

    return 0;
    
    
        
        
}
