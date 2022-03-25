#include "read_move.h"
#include "check_read_move.h"
#include <libchessviz/move.h>

#include <stdio.h>

void read_move(char chess_field[8][8])
{
    // read data from file!
    int flag = 1;
    char r_move[10];

    do 
    {
        scanf("%s", r_move);
        char n_move = r_move[0];

	for (int i = 0; i < 2; i++)
	{
	    scanf("%s", r_move);
            if (check_read_move(r_move) == 0) 
	    {
                printf("\n%c. %s\n\n", n_move, r_move);
                if (move(r_move, chess_field) != 0) 
		{
		    flag = 0;
                    break;
                }
            } 
	    else 
	    {
		flag = 0;
                break;
            }
        }
    } while (flag);
}

