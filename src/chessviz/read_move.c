#include "read_move.h"
#include <libchessviz/move.h>

#include <stdio.h>

void read_move(char chess_field[8][8])
{
    // сделать проверку на корректность введенных данных (выход за поля)
    char r_move[10];

    do 
    {
        scanf("%s", r_move);
        char n_move = r_move[0];
        scanf("%s", r_move);
        printf("%c. %s\n\n", n_move, r_move);
        if (r_move[0] < 97 || r_move[0] > 104 || r_move[3] < 97
            || r_move[3] > 104 || r_move[1] < 49 || r_move[1] > 56
            || r_move[4] < 49 || r_move[4] > 56) 
	{
            printf("Error: incorrectly entered field.");
            break;
        }
        if (move(r_move, chess_field) != 0) 
	{
            break;
        }
        scanf("%s", r_move);
        printf("%c. %s\n\n", n_move, r_move);
        if (r_move[0] < 97 || r_move[0] > 104 || r_move[3] < 97
            || r_move[3] > 104 || r_move[1] < 49 || r_move[1] > 56
            || r_move[4] < 49 || r_move[4] > 56) 
	{
            printf("Error: incorrectly entered field.");
            break;
        }
        if (move(r_move, chess_field) != 0) 
	{
            break;
        }
    } while (0);
}
