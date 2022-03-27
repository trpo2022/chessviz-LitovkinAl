#include "move.h"
#include <libchessviz/print_field.h>
#include <libchessviz/check_move.h>

#include <string.h>

int move(char r_move[10], char chess_field[8][8])
{
    // move Pawns
    if (r_move[0] >= 97 && r_move[0] <= 104) 
    {
        char row1 = r_move[1] - 49, row2 = r_move[4] - 49;
        char column1 = r_move[0] - 97, column2 = r_move[3] - 97;
        char tmp = chess_field[7 - row1][(int)column1];
        if (check_move(tmp, 'P') != 0) 
	{
            return 1;
        }
        chess_field[7 - row1][(int)column1] = 32;
        chess_field[7 - row2][(int)column2] = tmp;
    }

    // move Rook
    if (r_move[0] == 'R')
    {
	char row1 = r_move[2] - 49, row2 = r_move[5] - 49;
        char column1 = r_move[1] - 97, column2 = r_move[4] - 97;
        char tmp = chess_field[7 - row1][(int)column1];
        if (check_move(tmp, 'R') != 0)
        {
            return 1;
        }
        chess_field[7 - row1][(int)column1] = 32;
        chess_field[7 - row2][(int)column2] = tmp;
    }

    // move Knight
    if (r_move[0] == 'N')
    {
	char row1 = r_move[2] - 49, row2 = r_move[5] - 49;
        char column1 = r_move[1] - 97, column2 = r_move[4] - 97;
        char tmp = chess_field[7 - row1][(int)column1];
        if (check_move(tmp, 'N') != 0)
        {
            return 1;
        }
        chess_field[7 - row1][(int)column1] = 32;
        chess_field[7 - row2][(int)column2] = tmp;
    }

    // move Bishop
    if (r_move[0] == 'B')
    {
	char row1 = r_move[2] - 49, row2 = r_move[5] - 49;
        char column1 = r_move[1] - 97, column2 = r_move[4] - 97;
        char tmp = chess_field[7 - row1][(int)column1];
        if (check_move(tmp, 'B') != 0)
        {
            return 1;
        }
        chess_field[7 - row1][(int)column1] = 32;
        chess_field[7 - row2][(int)column2] = tmp;
    }

    // move Queen
    if (r_move[0] == 'Q')
    {
	char row1 = r_move[2] - 49, row2 = r_move[5] - 49;
        char column1 = r_move[1] - 97, column2 = r_move[4] - 97;
        char tmp = chess_field[7 - row1][(int)column1];
        if (check_move(tmp, 'Q') != 0)
        {
            return 1;
        }
        chess_field[7 - row1][(int)column1] = 32;
        chess_field[7 - row2][(int)column2] = tmp;
    }

    // move King
    if (r_move[0] == 'K')
    {
	char row1 = r_move[2] - 49, row2 = r_move[5] - 49;
        char column1 = r_move[1] - 97, column2 = r_move[4] - 97;
        char tmp = chess_field[7 - row1][(int)column1];
        if (check_move(tmp, 'K') != 0)
        {
            return 1;
        }
        chess_field[7 - row1][(int)column1] = 32;
        chess_field[7 - row2][(int)column2] = tmp;
    }

    print_field(chess_field);

    if (r_move[strlen(r_move) - 1] == '#')
    {
	return 10;
    }

    return 0;
}
