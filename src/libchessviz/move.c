#include "move.h"
#include <libchessviz/print_field.h>

#include <stdio.h>
#include <string.h>

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

    // move Rook
    if (r_move[0] == 'R' || r_move[0] == 'r')
    {
	char row1 = r_move[2] - 49, row2 = r_move[5] - 49;
        char column1 = r_move[1] - 97, column2 = r_move[4] - 97;
        char tmp = chess_field[7 - row1][(int)column1];
        if (tmp != 'R' && tmp != 'r')
        {
            printf("Error: it's not a rook!\n");
            return 1;
        }
        chess_field[7 - row1][(int)column1] = 32;
        chess_field[7 - row2][(int)column2] = tmp;
    }

    // move Knight
    if (r_move[0] == 'N' || r_move[0] == 'n')
    {
	char row1 = r_move[2] - 49, row2 = r_move[5] - 49;
        char column1 = r_move[1] - 97, column2 = r_move[4] - 97;
        char tmp = chess_field[7 - row1][(int)column1];
        if (tmp != 'N' && tmp != 'n')
        {
            printf("Error: it's not a knight!\n");
            return 1;
        }
        chess_field[7 - row1][(int)column1] = 32;
        chess_field[7 - row2][(int)column2] = tmp;
    }

    // move Bishop
    if (r_move[0] == 'B' || r_move[0] == 'b')
    {
	char row1 = r_move[2] - 49, row2 = r_move[5] - 49;
        char column1 = r_move[1] - 97, column2 = r_move[4] - 97;
        char tmp = chess_field[7 - row1][(int)column1];
        if (tmp != 'B' && tmp != 'b')
        {
            printf("Error: it's not a bishop!\n");
            return 1;
        }
        chess_field[7 - row1][(int)column1] = 32;
        chess_field[7 - row2][(int)column2] = tmp;
    }

    // move Queen
    if (r_move[0] == 'Q' || r_move[0] == 'q')
    {
	char row1 = r_move[2] - 49, row2 = r_move[5] - 49;
        char column1 = r_move[1] - 97, column2 = r_move[4] - 97;
        char tmp = chess_field[7 - row1][(int)column1];
        if (tmp != 'Q' && tmp != 'q')
        {
            printf("Error: it's not a queen!\n");
            return 1;
        }
        chess_field[7 - row1][(int)column1] = 32;
        chess_field[7 - row2][(int)column2] = tmp;
    }

    // move King
    if (r_move[0] == 'K' || r_move[0] == 'k')
    {
	char row1 = r_move[2] - 49, row2 = r_move[5] - 49;
        char column1 = r_move[1] - 97, column2 = r_move[4] - 97;
        char tmp = chess_field[7 - row1][(int)column1];
        if (tmp != 'K' && tmp != 'k')
        {
            printf("Error: it's not a king!\n");
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
