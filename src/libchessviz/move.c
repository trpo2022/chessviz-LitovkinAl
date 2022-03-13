#include "move.h"
#include <libchessviz/print_field.h>

#include <stdio.h>

int move(char r_move[10], char chess_field[8][8])
{
    // сделать проверку на корректность хода
    // move Pawns
    if (r_move[0] >= 97 && r_move[0] <= 104) 
    {
        char row1 = r_move[1] - 49, row2 = r_move[4] - 49;
        char column1 = r_move[0] - 97, column2 = r_move[3] - 97;
        char tmp = chess_field[7 - row1][(int)column1];
        if (tmp != 'P' && tmp != 'p') 
	{
            printf("Error: it's not a pawn!\n");
            return 1;
        }
        chess_field[7 - row1][(int)column1] = 32;
        chess_field[7 - row2][(int)column2] = tmp;
    }

    print_field(chess_field);

    return 0;
}
