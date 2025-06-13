#include <stdio.h>
int main()
{
    char check = 'a';
    switch (check)
    {
        case 'a' || 1: printf("Хутор ");
        
        case 'b' || 2: printf("янинЪ ");
                    break;
        default: printf("ХуторянинЪ");
    }
    return 0;
}
