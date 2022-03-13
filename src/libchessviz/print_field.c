#include "print_field.h"

#include <stdio.h>

void print_field(char chess_field[8][8])
{
    // printing the chessboard
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", 8 - i);
        for (int j = 0; j < 8; j++)
        {
            printf("%c ", chess_field[i][j]);
        }
        printf("\n");
    }
    printf("  a b c d e f g h\n");
}


