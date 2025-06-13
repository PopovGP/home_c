#include <stdio.h>

#define SIZE 8

int main(int argc, char **argv)
{
    char c;
    char x;
    
    char chessBoard[SIZE][SIZE];
    
    char colour = 'B';
    
    //Сгенерируем доску
    for (int i=0; i<SIZE; i++)
    {
        for (int j=0; j<SIZE; j++)
        {
            chessBoard[i][j] = colour;
            colour = (colour=='B'?'W':'B');
        }
        colour = (colour=='B'?'W':'B');
    }
            
            
    
    scanf("%c%c", &c, &x);
    //printf("%c %c %d %d\n", c, x, c, x);
    
    //Найдем нужную клетку
    int i=c-64;
    int j=x-48;
    
    chessBoard[j-1][i-1]=='B'?printf("BLACK\n"):printf("WHITE\n");
    
    //for (int i=0; i<SIZE; i++)
    //{
        //for (int j=0; j<SIZE; j++)
        //{
            //printf("%c ", chessBoard[i][j]);
     
        //}
        //printf("\n");
    //}
    
    return 0;
}
